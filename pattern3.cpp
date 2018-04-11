#include<stdio.h>
int main()
{ 
	int i,j,k;
	for(i=1;i<=2;i++)
	{
		for(k=i;k<3;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=3;i>=1;i--)
	{
		for(k=i;k<3;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}	
		printf("\n");
	}
}
