#include<stdio.h>
int main(){
    int x ;
    printf("Enter the array limit :");
    scanf("%d",&x);
    int arr[x];
    printf("Enter arrray elements :");
    for(int i=0;i<x;i++){
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<x/2;i++){
        temp =arr[i];
        arr[i]= arr[x-i-1];
        arr[x-i-1]= temp;
    }
    printf("The reversed array is. :  ");
    for(int i =0;i<x;i++){
        printf("%d",arr[i]);
    }
    return 0;
}