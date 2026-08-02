#include<stdio.h>
int main(){
    int t1=0,t2=1,nexterm=0,n;
    printf("Enter the number of terms :\n");
    scanf("%d",&n);

    if(n<1){
        printf("Series not possible\n");
    }
    if(n==1){
        printf("The series : \n");
        printf("%d",t1);
    }
    if(n==2){
        printf("The series : \n");
        printf("%d %d",t1,t2);
    }
    else if(n>2){
        printf("The series :\n");
        printf("%d %d ", t1,t2);
        for(int i = 2; i < n; i++){
            next = t1 + t2;
            printf("%d ", next);

            t1 = t2;
            t2 = next;
        }
    }
return 0;
}