#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[n],c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i] = -1;
	}
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				c[j]=0;
			}
		}
		if(c[i]!=0)
		{
			c[i]=count;
		}
		//printf("duplicates :- ");
		if(c[i]>1)
		{
			printf("%d duplicate = %d\n",a[i],c[i]);
		}
	}
}
