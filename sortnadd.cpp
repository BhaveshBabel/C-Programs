#include<stdio.h>
void merge(int[], int[], int[], int[]);
int main()
{
	int a[10], b[10], m, n, i, sorted[10];
	printf("ENTER NO OF ELEMENTS IN 1 ARRAY:- \n");
	scanf("%d",&m);
	
	printf("INPUT INTEGERS:-\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER NO OF ELEMENTS IN 2 ARRAY:- \n");
	scanf("%d",&n);
	
	printf("INPUT INTEGERS:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a, m, b, n, sorted);
	printf("SORTED ARRAY:-\n");
	for(c=0;c<m+n;c++)
	{
		printf("%d\n",sorted[i]);
	}
	return 0;
}
void merge(int a[], int m,int b[], int n,int sorted[])
{
	int i,j,k;
	for(i=0;i<m+n;i++)
	{
		if(j<m && k<n)
		{
			if(a[j] < b[k])
			{
				sorted[i] = a[j];
				j++;
			}
			else
			{
				sorted[i] = b[k];
				k++;
			}
			i++;
		}
		else if(j == m)
		{
			for(;i<m+n;)
			{
				sorted[i] = b[k];
				k++;
				i++;
			}
		}
		else
		{
			for(;i<m+n;)
			{
				sorted[i] = a[j];
				j++;
				i++;
			}
		}
	}
}
