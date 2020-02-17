#include<stdio.h>

int main() 
{

    int a, b;

    // printf("Please give 2 integers: \n");
    scanf("%d,%d", &a,&b);    

    if (b%a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    

    return 0;
}


