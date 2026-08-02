#include<stdio.h>
struct employee{

    int employee_code;
    int salary;
    int department_number;
    struct doj{
        char day;
        int month;
        int year;
    }doj;

};

int main()

{
    int n;
    printf("Enter the number of employees :\n");
    scanf("%d",&n);

    struct employee employee_no[n],max,min;
    
    
    for(int i =0;i<n;i++){
        printf("Enter the Employee Code of %d \n",i+1);
        scanf("%d",&employee_no[i].employee_code);

        printf("Enter the salary of %d: \n",i+1);
        scanf("%d",&employee_no[i].salary);

        printf("Enter Department no of %d\n ",i+1);
        scanf("%d",&employee_no[i].department_number);

        printf("Enter Details of joining for   %d\n ",i+1);
        printf("Enter day of joining :\n");
        scanf("%s", &employee_no[i].doj.day);

        printf("Enter month of joining :\n");
        scanf("%d", &employee_no[i].doj.month);

        printf("Enter year of joining :\n");
        scanf("%d", &employee_no[i].doj.year);

    }

   for(int i =0;i<n;i++){
        printf("The  Employee Code of %d is : %d  \n",i+1,employee_no[i].employee_code);


        printf("Enter the salary of %d is %d: \n",i+1,employee_no[i].salary);


        printf("Enter Department no of %d is %d:\n ",i+1,employee_no[i].department_number);


        printf("The  Details of joining for   %d is \n ",i+1);
        printf("The  day of joining is %c:\n",employee_no[i].doj.day);


        printf("The month of joining is %d:\n",employee_no[i].doj.month);


        printf("The year of joining is %d:\n",employee_no[i].doj.year);
    }
    
 return 0;
}