#include<stdio.h>
int main()
{
	int n,i,j;
//	printf("enter size :-");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i] > a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
