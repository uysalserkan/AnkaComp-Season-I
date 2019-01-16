#include "stdio.h"
void scat(char *s1, const char *s2);
int main(){
    char s1[]="Ali Cengiz ";
    char s2[]="Oyunlari";
    printf("s1: %s\ns2: %s\n",s1,s2);
    scat(s1,s2);
    printf("s1: %s\ns2: %s\n",s1,s2);
}
void scat(char *s1, const char *s2){
    int ls1=0,ls2=0;
    while(s1[ls1]!='\0'){
        ls1++;
    }
    while(s2[ls2]!='\0'){
        s1[ls1+ls2]=s2[ls2];
        ls2++;
    }
    s1[ls1+ls2]='\0';
}
