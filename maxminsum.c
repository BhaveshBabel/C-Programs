#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    long long int i,j;
    long long int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum[5]={0};
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j!=i)
            {
                sum[i]=sum[i]+a[j];
            }
        }
    }
   
    long long int min,max;
    max=sum[0];
    min=sum[0];
    for(i=0;i<5;i++)
    {
        if(max<sum[i])
            max=sum[i];
    }
    for(i=0;i<5;i++)
    {    
    if(min>sum[i])
     min=sum[i];
    }
    printf("%lld %lld",min,max);
    
    return 0;
}

