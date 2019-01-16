#include "stdio.h"
void sncat(char *s1, const char *s2, int b);
int main(){
    char s1[]="Ali Cengiz ";
    char s2[]="Oyunlari";
    printf("s1: %s\ns2: %s\n",s1,s2);
    sncat(s1,s2,4);
    printf("s1: %s\ns2: %s\n",s1,s2);
}

void sncat(char *s1, const char *s2, int b){
    int i=0,k=0;
    while(s1[i]!='\0')
        i++;
    while(k<b){
        s1[i+k]=s2[k];
        k++;
    }
    s1[i+k]='\0';
}
