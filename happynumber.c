#include<stdio.h>
int main()
{
	int i,num,sum,a;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=0;i<50;i++)
	{
		sum=0;
		while(num>0)
		{
			a = num%10;
			sum = sum + (a*a);
			num = num/10;
		}
		num = sum;
	}
	if(sum==1)
	{
		printf("Happy Number\n");
	}
	else
	{
		printf("Unhappy Number\n");
	}
}
//int main()
//{
//	int num,a,b;
//	scanf("%d",&num);
//	a = (num%10);
//	b = (num/10);
//	printf("modulo = %d\n div = %d\n",a,b);
//}
