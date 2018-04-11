#include<stdio.h>
int main()
{
	int i,count=0,count1=0;
	int n;
	scanf(" %d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf(" %d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i] > b[i])
		{
			count++;
		}
		else if(a[i]< b[i])
		{
			count1++;
		}
		else
		{
			continue;
			
		}
	}
	printf(" %d %d",count,count1);
//	return 0;
}

