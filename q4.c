#include<stdio.h>
int main(){
    float temp1,temp2;
    printf("Enter the temparature in fahrenheit: ");
    scanf("%f",&temp1);
     temp2 = (temp1 -32)/1.8;

     printf("The temparature in celcius is : %.2f", temp2);
     return 0;

}