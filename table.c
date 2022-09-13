#include<stdio.h>

int main()
{
    int a,i;
    printf("Enter the number you want table of\n");
    scanf("%d",&a);
    printf("The table of %d is\n",a);
    for(i=1;i<11;i++)
        printf("%d X %d = %d\n", a, i, a*i);

    return 0;
}
