#include<stdio.h>
int  main()
{
	int a[10][10], b[10][10], sub[10][10], m, n, i, j;
	printf("ENTER NO OF ROWS :-\n");
	scanf("%d",&m);
	printf("ENTER NO OF COLUMNS :-\n");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS OF 1 MATRIX :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENTER THE ELEMENTS OF 2 MATRIX :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("HENCE, SUBTRACTION OF YOUR MATRIX IS :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j] = 0;
			sub[i][j] = a[i][j] - b[i][j] - sub[i][j];
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
}
