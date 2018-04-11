#include<stdio.h>
int partition(int a[], int sz)
{
	int l=0;
	int h=sz-1;
	
	int pivot=0;
	if(a[l]<a[h])
	{
		return pivot;
	}
	while((l<=h)&&(pivot==0))
	{
	int m=l+(h-l)/2;
		
		if(a[m]>a[m+1])
		{
			pivot=m+1;
		}
		else if(a[m-1]>a[m])
		{
			pivot=m;
		}
		else if(a[m]>a[l])
		{
			l=m-1;
		}
		else
		{
			h=m-1;
		}
	}
	return pivot;
}
int bsearch(int a[], int key,  int h, int l) 
{
	 l = 0;
	h = h-1;
	while(l<=h)
	{
		int mid = l + (h - l)/2;
		if(key==a[mid])
		{
			return mid + 1;
		}
		else if(key>a[mid])
		{
			l = mid + 1;
		}
		else
		{
			h = mid - 1;
		}
	}
	return 0;
}
int main()
{
	int sz,i,key,l=0;
	scanf("%d/t%d",&sz,&key);
	int a[sz];
	for(i=0;i<sz;i++)
	{
		scanf("%d",&a[i]);
	}
	int pivot = partition(a,sz);
	if(pivot==0)
	{
		int res = bsearch(a,key,sz,0);
		printf(" pos =%d",res);
	}
	else if((a[l]<=key)&&(a[pivot-1]>=key))
	{
		int res1 = bsearch(a,key,pivot,0);
		printf("pos = %d",res1);
	}
	else
	{
		int res2 = bsearch(a,key,sz,pivot);
		printf(" pos  = %d",res2);
	}
}
