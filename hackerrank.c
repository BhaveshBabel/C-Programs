hackerrank in  string---------------------------------------------------
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,q,k;
    scanf(" %d",&q);
    char a[]="hackerrank";
    char b[10000];
    for(k=0;k<q;k++)
    {
    	scanf(" %s",b);
        i=0;
    int j=0;
    int count=0;
    while(b[i] != '\0')
    {
       if(a[j]==b[i])
       {
           count++;
           j++;
       }
        i++;
    }
    if(count >= 10)
        printf("YES\n");
    else
        printf("NO\n");
    }
}

