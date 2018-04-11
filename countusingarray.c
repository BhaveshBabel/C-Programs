#include<stdio.h>
int count_bits(int a[], int num)
{
	int index, count = 0;
	while(num)
	{
		index = num & 15;
		count = count + a[index];
		num = num>>4;
	} 
	return count;
}
int main()
{
	int a[] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
	int num; 
	printf("enter number :- ");
	scanf("%d",&num);
	int bits = count_bits(a, num);
	printf("bits = %d",bits);
}
