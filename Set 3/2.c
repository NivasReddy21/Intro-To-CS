#include<stdio.h>
int main()
{
    int prob1(int);
    int prob2(int);

    if (prob1(-29) == 0 && prob1(31) == 0)
    {
        printf("-29 and 31 are the roots for the first equation\n");
    }

    if (prob2(-2931) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    
    return(0);
}

int prob1(int a)
{
    
    return( (a*a*a) + (a*a) - (905 * a) - 2697 );
}

int prob2(int b)
{
    
    return( (b*b*b) + (b*b*2871) - (174961 * b) + 2634969);
} 
