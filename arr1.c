#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter array 1 row:\n");
    scanf("%d",&r1);

    printf("Enter array 1 Col:\n ");
    scanf("%d",&c1);
    
    printf("Enter array 2 row: \n");
    scanf("%d",&r2);

    printf("Enter array 2 Col:\n ");
    scanf("%d",&c2);

    int a[r1][c1],b[r2][c2],c[r1][c2];

    if(c1!=r2){
        printf("Multiplication not possible\n");
    }
    else{
        printf("Enter Array 1 elements\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter array 2 elements: \n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    c[i][j] =0;
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Printing the matrix\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
        }
        return 0;

    }
    
