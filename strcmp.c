#include "stdio.h"
int scmp(char *s1, char *s2);
int main(){
    char x1[]="Ali";
    char x2[]="Alihan";
    char x3[]="Ali";
    printf("%s\n",scmp(x1,x2)?"Yes it is same x1 and x2.":"No it is'nt same x1 and x2.");
    printf("%s\n",scmp(x1,x3)?"Yes it is same x1 and x2.":"No it is'nt same x1 and x2.");
}
int scmp(char *s1, char *s2){
    int i=0;
    while(s1[i]!='\0'||s2[i]!='\0'){
        if(s1[i]!=s2[i])
        return 0;
        i++;
    }
    return 1;
}
