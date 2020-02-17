#include<stdio.h>
int main()
{
	int i,a,x1,x2,x3,x4,x0;
	scanf("%d",&i);
	if((i>=1)&&(i<=31))
	{
		a=i;
		x4=i/16;
		i=i-(x4*16);
		x3=i/8;
		i=i-(x3*8);
		x2=i/4;
		i=i-(x2*4);
		x1=i/2;
		i=i-(x1*2);
		x0=i;
    	printf("Binary equivalent of decimal number %d is %d%d%d%d%d",a,x4,x3,x2,x1,x0);
	}
	else
		printf("Entered number is out of range");

	return 0;
}