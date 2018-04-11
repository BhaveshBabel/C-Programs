#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0,count = 0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp = a[i];
				a[i] =a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
			i++;
		}
	}

	
	printf("%d",count);
}
