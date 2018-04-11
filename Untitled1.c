#include <stdio.h>
#include<string.h>

int main()
{
    int time,count=0,count1=0,n,i,j;
    scanf("%d",&time);
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(j=0;j<time;j++)
    {
    for(i=0;i<n;i++)
        if((int)a[i]>=48 && (int)a[i]<=57)
        {
            count++;
        }
    }
    printf("%d",count);
    
    
}

