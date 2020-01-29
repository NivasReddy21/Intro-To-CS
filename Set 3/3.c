#include<stdio.h>


int main()
{
    int r, h, cyl_num, cost = 0;
    float PI = 3.14;

    printf("Enter the radius, height, number of cylinders respectively: ");
    scanf("%d%d%d", &r, &h, &cyl_num);
    
    cost = PI * ((2*r*h) + (r*r)) * 100 * cyl_num;
    
    printf("Total cost = %d\n", cost);
    return(0);
}