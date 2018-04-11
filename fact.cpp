#include<stdio.h>
int main()
{
	int a,b=1,i,sum=0,temp,n;
		printf("Enter the end number of series \n");
		scanf("%d",&n);
		temp=n;
		for(i=0;i<n;i++)
		{
			for(a=1;a<=temp;a++)
			{
				b=b*a;
			}
			sum=sum+b;
		}
		printf("%d",sum);
		return(0);
}
