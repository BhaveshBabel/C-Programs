#include<stdio.h>
void qsort(int a[], int low, int high);
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}

void qsort(int a[], int low, int high)
{
	if(high-low>1)
	{
		int temp = a[high-1];
		int k = high-1;
		int i,flag=0;
		for(i=low;i<high-1;i++)
		{
			if(flag==0)
			{
				if(temp<a[i])
				{
					a[k]=a[i];
					a[i]=temp;
					k=i;
					flag=1;
				}
			}
			else
			{
				if(temp>a[i])
				{
					a[k]=a[i];
					a[i]=a[k+1];
					a[k+1]=temp;
					k++;
				}
			}
		}
		qsort(a,low,k);
		qsort(a,k+1,high);
	}
}

