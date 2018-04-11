#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b,c,d,i,count=0;
    scanf(" %d %d",&a,&b);
    scanf(" %d",&c);
     d = abs(b-a);
    int x[d+1],y[d+1],z[d+1];
    for(i=0;i<=d;i++)
    {
        x[i]=a;
        a++;
    }
    for(i=0;i<=d;i++)
    {
       z[i] = x[i];
    }
    for(i=0;i<=d;i++)
    {
        int res = 0;
        while(x[i]!=0)
        {
            int rem = x[i]%10;
            res = (res*10) + rem;
            x[i] = x[i]/10;
        }
        y[i] = res;
    }
   // for(i=0;i<=d;i++)
    //{
   // 	printf("%d\t%d\n",z[i],y[i]);
	//}
    float r;
    for(i = 0; i <= d; i++)
    {
        r = abs(z[i]-y[i])%c;
        if(r == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

