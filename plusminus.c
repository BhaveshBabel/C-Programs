#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float a=0, a1=0, a2=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i=0; arr_i < n; arr_i++)
    {
        if(arr[arr_i] > 0)
        {
            a++;
        }
        else if(arr[arr_i] < 0)
        {
            a1++;
        }
        else
        {
            a2++;
        }
    }
     a = a/n;
    a1 = a1/n;
    a2 = a2/n;
    printf("%f\n",a);
    printf("%f\n",a1);
    printf("%f\n",a2);
       return 0;
}

