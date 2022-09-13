#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a\n");
    scanf("%d", &a);
    printf("Enter number b\n");
    scanf("%d", &b);
    printf("You entered %d and %d\n", a, b);
    printf("The required output is %d", a ^ b);
    return 0;
}