#include <stdio.h>
int fib2(int n);
int main()
{
    int num;
    printf("Enter the rank of number you want in fibonacci series:\n");
    scanf("%d", &num);
    printf("The number with rank %d is %d", num, fib2(num));
    return 0;
}
int fib2(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        int first = 0, second = 1;
        int third;
        for (int i = 0; i < n - 2; i++)
        {
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
}