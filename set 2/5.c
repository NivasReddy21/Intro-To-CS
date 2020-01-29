#include<stdio.h>

int main() {
    
    int a; 
    int bit = 0;

    printf("Give a number : ");
    scanf("%d", &a);

    for (int i = a; i != 0; i = a/2)
    {
        bit++;
    }
    
    printf("bits = %d\n", bit);

    
    return 0;
}