#include<stdio.h>
int count_bits(int num)
{
	int count = 0;
	while(num)
	{
		if((num&1)==1)
		{
			count++;
		}
		num = num>>1;
	}
	return count;
}
int main()
{
	int num,count = 0;
	printf("enter number :- ");
	scanf("%d",&num);
	int bits = count_bits(num);
	printf("bits = %d",bits); 
}
