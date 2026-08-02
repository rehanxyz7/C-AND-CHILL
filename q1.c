#include<stdio.h>
int main()
{
    int salary,allowance,rent;
    printf("Enter your salary");
    scanf("%d",&salary);
    
    allowance = salary*0.4;
    rent = salary*0.2;

    int actualsalary;
    actualsalary = allowance+salary+rent;

    printf("Ramesh's gross salary is %d",actualsalary);
    return 0;
}