#include<stdio.h>
int main(){
    char str[30];
    char *p;
    printf("Enter the string :\n");
    scanf("%s", str );

    char revstr[30];
    for(int i =0;i<30;i++){
        str[30-i-1]=revstr[i];
         p= &revstr[30];
    }
    printf("Actual string : %s",str);
    printf("Reversed string : %s",p);
    return 0;
}