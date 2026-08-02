#include<stdio.h>
int main(){
    int distance,m,f,i,c;
    printf("Enter the distance of your hometown to calcutta");
    scanf("%d", &distance);

    m=distance*1000;
    f=distance*3280;
    i = distance*39370;
    c = distance*10000;
    printf("The distance in kilometers =%d\nThe distance in meters =%d\nThe distance in feets=%d\nThe distance in inchs =%d\nThe distance in centimeters =%d\n",distance,m,f,m,c);
    return 0;
}