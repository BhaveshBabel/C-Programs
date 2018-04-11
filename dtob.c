#include<stdio.h>
int main()
{
	int n,i;
	printf("enter d number :- \n");
	scanf(" %d",&n);
	for(i=7;i>=0;i--)
	{
		 if(n & (1<<i))
		 {
		 	printf("1");
		 }
		 else
		 {
		 	printf("0");
		 }
	}
}
