#include<stdio.h>
int power_fun(int num)
{
	int count = 0;
	if((num&(num - 1)) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num,count = 0;
	printf("enter number :- ");
	scanf("%d",&num);
	int power = power_fun(num);
	if(power == 1)
	{
		printf("power of 2\n");
	}
	else
	{
		printf("not power of 2\n");
	}
}
