#include<stdio.h>
int main(){
    printf("Enter the array limit :\n");
    int n;
    scanf("%d",&n);


    int arr[n];

    printf("Enter the array elements : \n");


    for(int i=0;i<n;i++){
        printf("Enter array element %d : \n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Now printing the numbers to words :\n");
    for(int i=0;i<n;i++){
        switch(arr[i]){

            case 0:
                printf("Zero");
                break;
            case 1:
                printf("One");
                break;
             case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
             case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
             case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
                 case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine");
                break;
        }



    }
    return 0;
}