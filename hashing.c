#include<stdio.h>
#include<stdlib.h>
int hash1(int value)
{
	return value%11;
}
int hash2(int value)
{
	return value%7;
}
int main()
{
	int *a=(int*)calloc(11,sizeof(int));
	int i,num,value,res;
	
	for(i=0;i<11;i++)
	{
		scanf("%d",&num);
		res=hash1(num);
		if(a[res]==NULL || a[res]==0)
		{
			a[res]=num;
		}
		else 
		{
		
		 int res1=	hash2(num);
		 
		 if(a[res1]== NULL)
		 	 a[res1]=num;
		else
			a[++res1]=num;
		}
	}
	for(i=0;i<11;i++)
	{
		printf(" index - %d  value- %d \n",i,a[i]);
	}
	free(a);
	*a=NULL;
}
