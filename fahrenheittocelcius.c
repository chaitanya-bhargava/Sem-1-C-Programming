#include <stdio.h>

int main()
{
    for(int i=0;i<10;){
        float temp;
        printf("Enter the temperature in Fahrenheit:\n");
        scanf("%f", &temp);
        printf("The required temp in Celcius is:\n");
        printf("%f\n", (temp - 32) * 5 / 9);
        int ans;
        label:
        printf("Do you want to enter another temp[1/0]:\n");
        scanf("%d", &ans);
        if(ans==1){
            continue;
        }
        else if(ans==0){
            break;
        }
        else{
            printf("Please use 1 or 0\n");
            goto label;
        }
    }
    printf("Thanks for using our tool");
    return 0;
}
