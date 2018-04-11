#include<stdio.h>
int main()
{
int num,a=0,i,c;
printf("enter the number\n");
scanf("%d",&num);
while(num!=0)
	{ 
	c=num%10;
	a=(a*10)+c;
	num=num/10;
	}
printf("%d",a);
return(0);
}
