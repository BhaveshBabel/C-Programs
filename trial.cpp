#include<stdio.h>
int rec(int);
int main()
{
	int n,fac,x;
	printf("enter a no:");
	scanf("%d",&n);
	fac=rec(n);
	printf("factorial of no is %d",fac);
}
	int rec(int x)
	{
		int f;
		if(x==1)
			return 1;
		else
		{
			f=x*rec(x-1);
			return f;	
		}	
	}

