#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,agg;
    float p;
    printf("Enter the marks of the student");
    printf("Enter the marks of s1:");
    scanf("%d",&m1);
    
    printf("Enter the marks of s2\n");
    scanf("%d",&m2);

    printf("Enter the marks of s3\n");
    scanf("%d",&m3);

    printf("Enter the marks of s4\n");
    scanf("%d",&m4);

    printf("Enter the marks of s5\n");
    scanf("%d",&m5);

    agg = m1+m2+m3+m4+m5;

    printf("The total marks scored by the student is : %d\n",agg);
    p= (float)agg/500*100;
    printf("The percentage obtained : %f",p);

    return 0;

}