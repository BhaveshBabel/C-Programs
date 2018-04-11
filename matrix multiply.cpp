#include<stdio.h>
int main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3];
	printf("enter first matrix = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second  matrix = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("multiply of matrix = \n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		{
			c[i][j]=0;
				for(k=0;k<3;k++)
				{
					c[i][j]=(a[i][j]*b[i][j])+c[i][j];
				}	
		}
		}
		printf("\n resultant matrix is:-\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}	
	}

