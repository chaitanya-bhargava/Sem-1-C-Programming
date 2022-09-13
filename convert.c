#include <stdio.h>
int a;
int main()
{
    while (1)
    {
        printf("Here are the options:\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.pound to kgs\n5.inches to metres\n");
        label:
        printf("Choose what you'd like to do[1/2/3/4/5]:\n");
        scanf("%d", &a);
        if (a == 1)
        {
            float kms;
            printf("Enter the kms\n");
            scanf("%f", &kms);
            printf("%.2f kms in miles is %.2f\n", kms, kms / 1.609344);
        }
        else if (a == 2)
        {
            float inches;
            printf("Enter the inches\n");
            scanf("%f", &inches);
            printf("%.2f inches in foot is %.2f\n", inches, inches / 12);
        }
        else if (a == 3)
        {
            float cms;
            printf("Enter the cms\n");
            scanf("%f", &cms);
            printf("%.2f cms in inches is %.2f\n", cms, cms / 12);
        }
        else if (a == 4)
        {
            float pounds;
            printf("Enter the pounds\n");
            scanf("%f", &pounds);
            printf("%.2f pounds in kgs is %.2f\n", pounds, pounds / 2.205);
        }
        else if (a == 5)
        {
            float inches;
            printf("Enter the inches\n");
            scanf("%f", &inches);
            printf("%.2f inches in metres is %.2f\n", inches, inches / 39.37);
        }
        else{
            printf("Enter a valid number!\n");
            goto label;
        }
        int ans;
        label2:
        printf("Would you like to continue[1/0]:");
        scanf("%d",&ans);
        if(ans==0){
            printf("Thanks for using my tool");
            break;
        }
        else if(ans==1){
            continue;
        }
        else{
            printf("Enter a valid number!\n");
            goto label2;
        }
    }

    return 0;
}