#include<stdio.h>
int main()
{
	int i,n,k,bact=0,bcharge,bch=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&bcharge);
	for(i=0;i<n;i++)
	{
		if(a[i] != a[k])
		{
			bact = bact + a[i];
		}
	}
	int bactual = bact/2;
	bch = bcharge - bactual;
	if(bactual == bcharge)
	{
		printf("bon appetit");	
	}
	else
	{
		printf("%d",bch);
	} 
}
