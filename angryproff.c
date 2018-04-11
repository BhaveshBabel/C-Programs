#include<stdio.h>
int main()
{
	int q,i,j;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		int n,k;
		scanf("%d",&n);
		scanf("%d",&k);
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			if(a[j]<=0)
			{
				k--;
			}			
		}
		if(k<=0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
//		if(k>0)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
	}
	return 0;
}
