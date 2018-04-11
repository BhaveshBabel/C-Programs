#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the size");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
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
	}
	for(i=0;i<n;i++)
		printf("%d",arr[i]);

}
