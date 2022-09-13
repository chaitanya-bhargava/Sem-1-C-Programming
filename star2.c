#include <stdio.h>
void reversestar(){
    int i, n,j;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for (i = n; i > 0; i--)
    {
        for(j=i;j>0;j--){
            printf("*");

        }
        printf("\n");
    }
}
void triangularstar(){
    int i, n,j;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for(j=0;j<i+1;j++){
            printf("*");

        }
        printf("\n");
    }
}
int main()
{
    int ans;
    label:
    printf("What would you like to print[0 for triangular/1 for reverse]\n");
    scanf("%d",&ans);
    if (ans == 0){
        triangularstar();
    }
    else if (ans == 1)
    {            
        reversestar();
    }
    else{
        printf("Enter a valid number!\n");
            goto label;
    }
    return 0;
}
