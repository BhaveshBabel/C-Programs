#include<stdio.h>
int main()
{
	int i,j,k=0,l;
	printf(" enter no. :");
	scanf("%d",&i);
	l=i;
	while(i>0)
	{
		j = i%10;
		k = k+(j*j*j);
		i = i/10;
	}	
	if(k==l)
	{
		printf(" %d is armstrong ",l);
	}
	else
	{
		printf(" %d not armstrong ",l);
	}
}
