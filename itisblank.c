#include "stdio.h"
int itisblank(char str);
int main() {
    char s1=' ',s2='a';
    printf("%s\n",itisblank(s1)?"Yes, this char is blank.":"No, this char is'nt blank.");
    printf("%s\n",itisblank(s2)?"Yes, this char is blank.":"No, this char is'nt blank.");
}
int itisblank(char str){
    if(str==' ')
        return 1;
    return 0;
}
