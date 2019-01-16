#include "stdio.h"
void strcopy(char *s1, const char *s2);
int main(){
    char str1[]="Furkan";
    char str2[]="Serkan!";
    printf("1.) %s\n",str1);
    strcopy(str1,str2);
    printf("2.) %s\n",str1);
}
//with array notation
void strcopy(char *s1, const char *s2){
    int i;
    for(i=0;(s1[i]=s2[i])!='\0';i++)
        ;
}
