#include "stdio.h"
int itisdigit(char isit);
int main(){
    char str1='2', str2='a';
    printf("%s\n",itisdigit(str1)?"Yes, str1 is digit.":"No, str1 is'nt digit.");
    printf("%s\n",itisdigit(str2)?"Yes, str2 is digit.":"No, str2 is'nt digit.");

}
int itisdigit(char isit){
    if(isit >='0'&&isit<='9')
        return 1;
    return 0;
}
