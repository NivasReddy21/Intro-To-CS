#include<stdio.h>
int main()
{
	float  a,b,c,d,max,min,diff;
	scanf("%f%f%f%f",&a,&b,&c,&d);        
	printf(" %f %f %f %f",a,b,c,d);
	if(a>b&&a>c&&a>d)
		max=a;
	if(b>a&&b>c&&b>d)
		max=b;
if(c>b&&c>a&&c>d)
max=c;      	
if(d>b&&d>c&&d>a)
max=d;         if(a<b&&a<c&&a<d)
min=a;
if(b<a&&b<c&&b<d)
min=b;
if(c<b&&c<a&&c<d)
min=c;
if(d<b&&d<c&&d<a)
min=d;         
diff=max-min;
printf("%0.4f",diff);
return 0;


}