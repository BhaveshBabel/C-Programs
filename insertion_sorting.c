#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	int key=a[n-1];
	int j,flag=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i-1]>key)
		{
			b[i]=a[i-1];
		}
		else 
		{
			b[i]=key;
			
			for(j=0;j<n;j++)
			{
				printf("%d ",b[j]); 
			}
			printf("\n");
			break;
		}
		
		
			for(j=0;j<n;j++)
			{
				printf("%d ",b[j]); 
			}
			printf("\n");
	}
}
