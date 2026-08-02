#include<stdio.h>
int main(){
    int year;
    printf("Enter the year to check : \n");
    scanf("%d",&year);

    if(year%100==0){
        printf("Not Leap year");}
    else if(year%4==0 ){
        printf("Leap Year ");
    }
    else if(year%400==0)
        printf("LEAP YEAR");
    else 
        printf("Not leap year ");
    return 0;
}