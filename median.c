#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	scanf(" %d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}w
	 int num=((n+1)/2);
	 printf("%d",arr[num-1]);
}
