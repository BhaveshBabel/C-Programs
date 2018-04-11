#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,num,d=0,r;
	printf("enter binary form : - ");
	scanf(" %d",&num);
	while(num != 0)
	{
		r = num % 10;
		d = d + r * pow(2,i);
		num = num / 10;
		i++;
	}
	printf("\n");
	printf("decimal form = %d ",d);
}
