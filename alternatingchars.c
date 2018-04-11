#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int alternatingCharacters(char* s)
{
    int i,count = 0;
    for( i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    return count;
}

int main() {
    int a0,q; 
    scanf("%i", &q);
    for( a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = alternatingCharacters(s);
        printf("%d\n", result);
    }
    return 0;
}

