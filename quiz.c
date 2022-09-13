#include<stdio.h>
int temp1, temp2;
void bruh(int *a,int *b){
    temp1=*a + *b;
    temp2=*a-*b;
    *a=temp1;
    *b=temp2;

}
int main()
{
    int a = 4,b=3;
    printf("The value of a is %d and the value of b is %d\n",a,b);
    bruh(&a,&b);
    printf("The value of a is %d and the value of b is %d\n",a,b);
    return 0;
}