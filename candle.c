#include<stdio.h>
int main()
{
	static int count=0;
	int n,i;
	printf("enter d size :- ");
	scanf(" %d",&n);
	int a[n];
	printf("enter d elements :- \n");
	for(i=0;i<n;i++)
	{
		
		scanf(" %d",&a[i]);
		
	}
	int max = a[0];
	for(i=0;i<n;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(max == a[i])
		{
			count++;
		}
	}
	printf("max value = %d ",max);
	printf("\n");
	printf(" %d occured %d times",max,count);
}
