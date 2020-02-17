#include<stdio.h>
int main()
{
    float x,a;
    int x1,x2,x3,x4;
    scanf("%f",&x);
    a=x;
    if(x>0&&x<1)
    {
    x1=x/0.5;
    x=x-(x1*0.5);
    x2=x/0.25;
    x=x-(x2*0.25);
    x3=x/0.125;
    x=x-(x3*0.125);
    x4=x/0.0625;
    printf("Binary equivalent of %f is 0.%d%d%d%d",a,x1,x2,x3,x4);
    }
    else
    printf("Entered number is not a +ve decimal fraction less than 1");

return 0;
}