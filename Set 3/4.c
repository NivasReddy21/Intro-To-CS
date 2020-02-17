#include<stdio.h>


int main()
{

    int a;
    int b;
    int qut;
    int rem;

    // printf("Please give the first number: ");
    scanf("%d,%d", &a, &b);

    // printf("Please give the second number: ");
    

    qut = a/b;
    rem = a%b;

    printf("%d,d", qut, rem);

    return 0;

}