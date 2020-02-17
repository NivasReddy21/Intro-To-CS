#include<stdio.h>
#include<math.h>
int main()
{
     float pa,si,ci1,ci2,ci3,ci4,ci5;
    scanf("%f",&pa);
    si=(pa*0.035);
    printf("Simple Interest for 10 years: %0.2f\n",si);
    ci1=pa*((pow((1+0.035),10))-1);
    printf("Compound Interest for 10 years annually: %0.2f\n",ci1);
    ci2=pa*((pow((1+(0.035)/2),20))-1);
    printf("Compound Interest for 10 years semi-annually: %0.2f\n",ci2);
    ci3=pa*((pow((1+(0.035)/4),40))-1);
    printf("Compound Interest for 10 years quaterly: %0.2f\n",ci3);
    ci4=pa*((pow((1+(0.035)/12),120))-1);
    printf("Compound Interest for 10 years monthly: %0.2f\n",ci4);
    ci5=pa*((pow((1+(0.035)/(365)),(3650)))-1);
    printf("Compound Interest for 10 years daily: %0.2f\n",ci5);

    return 0;
}