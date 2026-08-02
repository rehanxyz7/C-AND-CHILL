#include<stdio.h>
int main(){
    int n,low,mid,high,search;
    printf("Enter the list of numbers : \n");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }

    low =0;
    high = n-1;
    mid = (low+high)/2;

    printf("Enter the number to search :\n");
    scanf("%d",&search);

    while(low<=high){
        mid = (low+high)/2;
        if(search==arr[mid]){
            printf("THE NUMBER IS FOUND IN %d position ",mid);
            break;
        }
        else if(search<arr[mid]){
            high= mid-1;
        }
        else if(search>arr[mid]){
            low = mid +1;
        }
        
    }
    if(search!=arr[mid]){
        printf("Item not found");
    }
return 0;
}