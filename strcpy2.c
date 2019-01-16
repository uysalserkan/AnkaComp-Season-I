#include "stdio.h"
void strcopy(char *s1, const char *s2);
int main(){
    char str1[]="Furkan";
    char str2[]="Ali Cengiz";
    printf("1.) %s\n",str1);
    strcopy(str1,str2);
    printf("2.) %s\n",str1);
}
//with pointer notation
void strcopy(char *s1, const char *s2){
    for(;(*s1=*s2)!='\0';s1++,s2++)
        ;
}
