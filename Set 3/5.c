#include<stdio.h>

int main()
{

    int x1, y1, x2, y2;
    float slope;

    // printf("Give the four terminal points");
    scanf("%d, %d, %d, %d", &x1, &y1, &x2, &y2);

    slope = (y2-y1)/(x2-x1);

    printf("%0.0f", slope);

    return 0;

}