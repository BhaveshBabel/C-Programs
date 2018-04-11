#include<stdio.h>
//int partition(int , int , int);
void mergeSort(int a[],int low, int mid, int high)
{
	int i,j,k,b[high];
	for(i=low,j=mid+1,k=0; i<=mid && j<=high; k++ )
	{
		if(a[i] <= a[j])
		{
			b[k]=a[i++];
		//	i++;
		}
		else
		{
			b[k]=a[j++];
		//	j++;
		}
		while(i<=mid)
		{
			b[k++]=a[i++];
			//k++;
			//i++;
		}
		while(j<=high)
		{
			b[k++]=a[j++];
			//k++;
			//j++;
		}
		//copy of array;
		for(k=low;k<=high;k++)
		{
			a[k]=b[k];
		}
	}


	//return 0;
}
void partition(int a[], int low, int high)
{
	if(low < high)
	{
		high = high - 1;
		int mid = low + (high - low)/2;
		partition(a, 0, mid);
		partition(a, mid+1, high);
		mergeSort(a, low, mid, high);
	}
	// return 0;
	else
	{
		return;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);    //size;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);    //array;
	}
	partition(a,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);     //printing array after merge sort
	}	
}


