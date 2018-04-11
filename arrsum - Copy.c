#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int simpleArraySum(int ar_size, int* ar) 
{
	int i,sum = 0;
	for(i=0;i<ar_size;i++)
	{
		sum = sum + ar[i];	
	}
	return sum;
}

int main() {
    int i,n; 

    scanf("%i", &n);
    int ar[n];
   // int *ar = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
	{
       scanf("%d",&ar[i]);
    }
    int result = simpleArraySum(n, ar);
    printf("%d\n", result);
    return 0;
}

