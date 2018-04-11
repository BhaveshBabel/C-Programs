#include<stdio.h>
int main()
{
	int n,i,num;
	printf("enter size :-");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no to search :- ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("%d",i);
		}
	}
}
