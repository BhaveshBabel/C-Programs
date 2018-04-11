#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() 
{
    int year,flag=0; 
    scanf("%d", &year);
   
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
         flag=1;
    else
         flag=0;
  if(flag)
    {
        int x=256-244;
           printf("%d.09.%d",x,year);
    }
  else
    {
        int x =256-243;
         printf("%d.09.%d",x,year);
    }
   
    return 0;
}
