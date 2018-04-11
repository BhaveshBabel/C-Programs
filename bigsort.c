#include<stdio.h>
int main()
{
	int i,j,n;
	//double a;
	scanf("%d",&n);
	 double a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	int max = a[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
			if(a[i]>a[j])
			{
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		prinf("%lf",a[i]);
	}
	return 0;
}
