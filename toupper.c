#include "stdio.h"
void itistoupper(char *str);
int main(){
    char x[]="Serkan";
    puts(x);
    itistoupper(x);
    puts(x);
}
void itistoupper(char *str){
    int i;
    for(i=0;str[i]!='\0';i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]+'A'-'a';
}
