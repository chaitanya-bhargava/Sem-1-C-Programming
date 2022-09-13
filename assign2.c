#include<stdio.h>
int main()
{
    int a, b,c;
    printf("Enter number a\n");
    scanf("%d", &a);
    printf("Enter number b\n");
    scanf("%d", &b);
    printf("You entered %d and %d\n", a, b);
    c=(a|b)&(~(a&b));
    printf("The required output is %d", c);
    return 0;
}