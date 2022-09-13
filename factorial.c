#include <stdio.h>
int fact(int a);
int num;
int main()
{
    printf("Enter number you want factorial of\n");
    scanf("%d", &num);
    printf("The required factorial is %d", fact(num));
    return 0;
}
int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}