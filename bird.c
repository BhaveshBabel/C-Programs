#include<stdio.h>
main()
{
	static int c1=0,c2=0,c3=0,c4=0,c5=0;
	int n,i;
	printf("enter the size:-");
	scanf("%d",&n);
	int a[n];
	printf("enter the bird number :-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			c1++;
		}
		else if(a[i]==2)
		{
			c2++;
		}
		else if(a[i]==3)
		{
			c3++;
		}
		else if(a[i]==4)
		{
			c4++;
		}
		else 
		{
			c5++;
		}
	}
	int b[]={c1,c2,c3,c4,c5};
	int temp=b[0];
	int j=1;
	for (i=1;i<=5;i++)
	{
		if(b[i] >temp)
		{
			temp=b[i];
			j=i+1;
		}
	}
	printf("max birds present = %d\n",j);
}
