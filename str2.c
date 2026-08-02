#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);

    printf("Altering the case of the string ");
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A' && str[i]<='z'){
            str[i] +=32;
        }
    }
    printf("%s",str);
return 0;


}