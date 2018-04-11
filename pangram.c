#include<stdio.h>
int main()
{
	int i,count=0;
	char a[1000];
	gets(a);	
	for(i=0;a[i] != '\0'; i++)
	{
		if((a[i]>=97&&a[i]<=122)||(a[i]>=65&&a[i]<=90)||(a[i]==32))
		{
			//printf("pangram");
			count++;
		}
	}
	if(count>=26)
	{
		printf("pangram");
	}
	else
	{
		printf("not");
	}
}
