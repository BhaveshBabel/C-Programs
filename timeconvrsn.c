#include<stdio.h>
int main()
{
	int hh,mm,ss;
	char a[2];
//	scanf(" %d : %d: %d %s",&hh,&mm,&ss,&a);
scanf("%d",&hh);
scanf("%d",&mm);
scanf("%d",&ss);
scanf("%s",&a);
	if((a[0] == 'p')|| (a[0] == 'P'))
	{
		if(hh!=12)
			hh = hh + 12;	
	}
    else if((a[0] == 'a')|| (a[0] == 'A'))
    {
        if(hh == 12)
            hh=0;
    }
printf("%0.2d:%0.2d:%0.2d",hh,mm,ss);
}
