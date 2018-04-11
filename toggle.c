#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char a[101];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i] = a[i] + 32;
		}
		else
		{
			a[i] = a[i] - 32;
		}
	}
	puts(a);
}
