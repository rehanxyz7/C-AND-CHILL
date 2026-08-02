#include<stdio.h>
int main(){
    int n,count =0;
    printf("Enter a number :\n");
    scanf("%d",&n);

    while(n!=0){
        count++;
        n=n/10;
    }
    printf("The number of digits = %d",count);
    return 0;
}