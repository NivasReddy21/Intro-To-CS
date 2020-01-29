#include<stdio.h>


int main()
{

    int a;
    int b;
    int qut;
    int rem;

    printf("Please give the first number: ");
    scanf("%d", &a);

    printf("Please give the second number: ");
    scanf("%d", &b);

    qut = a/b;
    rem = a%b;

    printf("Quotient is: %d and remainder is: %d", qut, rem);

    return 0;

}