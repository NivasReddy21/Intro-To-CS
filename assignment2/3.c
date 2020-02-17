#include<stdio.h>
int main()
{
int a,t,o,h,total;
scanf("%d",&a);  
if(0<a<999)
{
o=a%10;
t=a%100;
t=t/10;
h=a/100;
total=o+t+h;
printf("Sum of digits of %d is %d",a,total);        
}
else
printf("Entered number is out of range");
return 0;
}