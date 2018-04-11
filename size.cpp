#include<stdio.h>
int main()
{
	signed x;
	unsigned y;
	x=10 +- 10u - 10u +- 10;
	y=x++;
	if(x==y)
	  printf("%d %d",x,y);
	else if (x!=y)
	  printf("%d %u",x,y);
	return 0;
}
