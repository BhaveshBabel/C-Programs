#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,count=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            count++;
        }
    }

        if(count>=k)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

    return 0;
}

