#include<stdio.h>
int main()
{
	int i=5,j;
	j=i++ + ++i + ++i + ++i;
	printf("%d\t%d",j,i);
}

