#include<stdio.h>
int main()
{
	int i,count = 1;
	char a[100000];
	gets(a);
	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i] >= 65 && a[i] <= 90 )
		{
			count ++;
		}
	}
	printf("%d",count);
	return 0;
}
