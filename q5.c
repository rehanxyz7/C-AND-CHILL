#include<stdio.h>
int main(){
    int num,rev =0,n;
    printf("ENter a five digit number : ");
    scanf("%d", &num);

    while(num!=0){
        int digit = num%10;
        rev = rev*10 +digit;
        num = num/10;

    }
    printf("%d",rev);
    return 0;
}