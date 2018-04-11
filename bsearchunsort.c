#include<stdio.h>
void bsearch(int *a, int key, int n, int *pos)
{
	int l=0;
	int h=n-1;
	while(l<=h)
	{
		int m=l+(h-l)/2;
		if(key==a[m])
		{
			*pos=m+1;
			break;
		}
		else if(key>a[l] && key>a[h])
		{
			h=m-1;
		}
		else if(key>=a[l]&&key<a[m])
		{
			h=m-1;
		}
		else
		{
			l=m+1;
		}
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	int pos = -1;
	scanf("%d",&key);
	bsearch(a,key,n,&pos);
	if(pos>=0)
		printf("%d",pos);
	else
		printf("not found");
		return 0;
}
