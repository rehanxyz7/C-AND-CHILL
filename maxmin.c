#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:\n");
    scanf("%d",&n);
int arr[n];
    printf("Enter the array elements : \n");
    for(int i =0;i<n;i++){
        printf("Enter the %d array element: ",i+1);
        scanf("%d",&arr[i]);
       
    }
     int max,min;
     max=arr[0];
     min= arr[0];
     for(int i =1;i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
        else if(arr[i]<min){
            min =arr[i];
        }
    }
    printf("The max term in the array %d\n", max);
    printf("The min term in the array %d", min);
}
