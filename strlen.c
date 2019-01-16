#include "stdio.h"
int stringleng(char *str);
int main(){
    char x[]="AU Bilgisayar";
    puts(x);
    printf("String lenght is: %d\n",stringleng(x));
}
int stringleng(char *str){
    int i;
    for(i=0;str[i]!='\0';i++){
        ;
    }
    return i;
}
