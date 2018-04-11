#include<stdio.h>
main()
{
	int i,j,k;
	int a[3][3],b[3][3],c[3][3];
	printf("enter ur first matrix:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("enter ur second matrix:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				c[i][j]=0;
				{
					for(k=0;k<3;k++)
					{
						c[i][j] = c[i][j]+(a[i][j]*b[i][j]);
					}
				}
			}
			printf("\n");
		}
		printf("the resultant matrix is:-\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t%d",c[i][j]);
			}
			printf("\n");
		}
	}
