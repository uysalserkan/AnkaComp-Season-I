#include "stdio.h"
int itislower(char str);
int main(){
    char str1='a',str2='A',str3='1';
    printf("%s\n",itislower(str1)?"Yes, it is lower.":"No, it is'nt lower.");
    printf("%s\n",itislower(str2)?"Yes, it is lower.":"No, it is'nt lower.");
    printf("%s\n",itislower(str3)?"Yes, it is lower.":"No, it is'nt lower.");
}
int itislower(char str){
    if(str>='a'&&str<='z')
        return 1;
    return 0;
}
