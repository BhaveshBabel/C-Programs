#include<stdio.h>
int main()
{
	int n,m,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		int j;
		for(j=i;j<n-1;j++)
		{
		
			if(a[i]>a[j+1])
			{
				int temp;
				temp = a[i];
				a[i] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);	
	}	
	printf("\n");
	for(i=0;i<m;i++)
	{
		int j;
		for(j=i;j<m-1;j++)
		{
		
			if(b[i]>b[j+1])
			{
				int temp;
				temp = b[i];
				b[i] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d",b[i]);	
	}	
	int count = 0;
	for(i=0;i<n;i++)
	{
		if(a[i]==a[])
	} 
}
