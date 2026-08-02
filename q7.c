#include<stdio.h>
int main(){
    int profit,loss,sp,cp;
    printf("Enter the cost price of the item : \n");
    scanf("%d",&cp);

    printf("Enter the selling price of the item ");
    scanf("%d",&sp);

    if(cp>sp){
        printf("The item is sold with a loss of :%d\n",cp-sp);
    }
    else if(sp>cp){
        printf("The item has made a profit of : %d",sp-cp);
    }
    else{
        printf("The item has neither made loss nor profit ");
    }
    return 0;
}