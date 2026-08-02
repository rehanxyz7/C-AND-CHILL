#include<stdio.h>
int main(){
    int n , mul;
    printf("Enter the number :\n");
    scanf("%d",&n);

    for(int i =1;i<=10;i++){
        printf("The multiplication of %d with %d is : %d\n",n,i,n*i);
    }
    return 0;
}