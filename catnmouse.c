#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	int a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
//		int a;
//		int b;
//		int c;
		scanf("%d %d %d",&a, &b, &c);
	
	printf("\n");
	//for(i=0;i<n;i++)
	
		if(abs(a-c)<abs(b-c))
		{
			printf("cat a\n");
		}
		else if(abs(b-c)<abs(a-c))
		{
			printf("cat b\n");
		}
		else
		{
			printf("mouse c\n");
		}
	}
	return 0;
}
