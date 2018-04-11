#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() 
{
    int n,x,y,i; 
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=38)
       {
              x=a[i]%5;
              y=5-x;
        if(y<3)
        {
            a[i]=a[i]+y;
        }
       }
    }
    
for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    

    return 0;
}

