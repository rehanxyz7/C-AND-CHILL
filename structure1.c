#include<stdio.h>
struct complex{
    float real;
    float imag;
};
int main(){
    struct  complex c1, c2,sum,diff;
    
    printf("Enter Real part of complex 1 ");
    scanf("%f",&c1.real);

    printf("Enter Complex part of complex 1");
    scanf("%f",&c1.imag);

     printf("Enter Real part of complex 2");
    scanf("%f",&c2.real);

    printf("Enter Complex part of complex 2");
    scanf("%f",&c2.imag);

    sum.real  = c1.real +c2.real;
    sum.imag = c1.imag + c2.imag;

    diff.real = c1.real - c2.real;
    diff.imag =c1.imag - c2.imag;


    printf("The sum of complex numbers : %.2f + %.2f\n",sum.real,sum.imag);
    printf("The difference of complex numbers : %.2f - %.2f\n",diff.real,diff.imag);

    return 0;
    
}