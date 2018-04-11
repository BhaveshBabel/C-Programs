#include<stdio.h>
int bsearch(int a[],int n, int key)
{
	int l = 0;
	int h = n-1;
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
main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	//int pos = -1;
	scanf("%d",&key);
	int pos = bsearch(a,n,key);
	if(pos)
	{
		printf("%d",pos);
	}
	else
	{
		printf("element not found");
	}
}
