#include<stdio.h>
int main(){
    int n;
    printf("Enter the arrat sizes ");
    scanf("%d",&n);

    int arr1[n],arr2[n];
    printf("Enter array 1 elements:");
    for(int i=0;i<n;i++){
        printf("Enter element %d of array 1: ",i+1);
        scanf("%d",&arr1[i]);
    }

     printf("Enter array 2 elements:");
    for(int i=0;i<n;i++){
        printf("Enter element %d of array 2: ",i+1);
        scanf("%d",&arr2[i]);
    }
    int arr3[n+n];
    for(int i =0;i<n;i++){
        arr3[i] = arr1[i] + arr2[i];
    }
    
    for(int i=0;i<n;i++){
        printf("Array 3 elements %d \n",arr3[i]);
    }
    return 0;
}