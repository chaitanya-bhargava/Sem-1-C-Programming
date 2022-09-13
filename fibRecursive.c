#include<stdio.h>
int fib(int n);
int main()
{
    int num;
    printf("Enter the rank of number you want in fibonacci series:\n");
    scanf("%d",&num);
    printf("The number with rank %d is %d",num,fib(num));
    return 0;
}
int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}