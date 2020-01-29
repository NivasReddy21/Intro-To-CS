#include<stdio.h>

int main() {
    
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(b%a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}