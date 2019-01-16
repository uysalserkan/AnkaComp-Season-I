#include "stdio.h"
void sncopy(char *s1, const char *s2, int n);
int main(){
    char str1[]="Furkan";
    char str2[]="Serkan";
    puts(str1);
    sncopy(str1,str2,5);
    puts(str1);
}
//with array notation
void sncopy(char *s1, const char *s2, int n){
    int i;
    for(i=0;i<n;i++){
        s1[i]=s2[i];
    }
    s1[n]='\0';
}
