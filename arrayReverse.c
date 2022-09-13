#include<stdio.h>
int len;
void arrayrev(int arr[]){
    // printf("%d\n",len);
    for(int i=0;i<(len/2);i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    len=sizeof(arr)/4;
    printf("The old array is :\n");
    for (int k=0;k<len;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");

    arrayrev(arr);
    printf("The new array is :\n");
    for (int j=0;j<len;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    
    return 0;
}