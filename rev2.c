#include<stdio.h>
int rev(int n){
    int rev=0,rem;
    while(n!=0){
        rem =n%10;
        rev =rev*10 +rem;
        n=n/10;
    }
    return rev;
}
int main(){
    int num,reversed;
    printf("Enter the number : \n");
    scanf("%d",&num);

    reversed =rev(num);
    printf("The reversed number is : %d", reversed);
    return 0;

}