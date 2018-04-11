#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
			if(j>1&&j<(i-1))
			{
				printf(" ");
			}
		}
	}printf("\n")
}
