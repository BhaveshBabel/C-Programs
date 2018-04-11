#include<stdio.h>
int main()
{
	int a,n,arm=0,r;
	printf("enter a no n :");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r = n%10;
		arm = arm + (r*r*r);
		n = n/10;
	}
	if(arm==a)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}
