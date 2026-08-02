#include<stdio.h>
int main(){
    int n;
    printf("The Sum and average of the first n whole numbers :\n");
    printf("Enter the limit :\n ");
    scanf("%d",&n);

    int sum =0;
    for(int i=0;i<n;i++){
        sum += i;
    }
    printf("The Sum of the N whole numbers  is %d\n",sum);
    return 0;
}