#include <stdio.h>

int main()
{
   char a[101];
   gets(a);
   int i,c=0;
   int b;
   b=strlen(a);
   
   for(i=0;i<b;i++)
   {
   		if(a[i]==a[b-i-1])
   		{
   			c=1;
   			break;
   		}
   }
   	if(c)
   	{
   		printf("yes");	
	}
   	else
   	{
   			printf("no");
   	}
   
}

