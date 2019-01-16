#include "stdio.h"
int sncmp(char *s1, char *s2, int b);
int main(){
    char x1[]="Ali";
    char x2[]="Alihan";
    char x3[]="Ali";
    printf("%s\n",sncmp(x1,x2,4)?"Yes it is same x1 and x2.":"No it is'nt same x1 and x2.");
    printf("%s\n",sncmp(x1,x2,3)?"Yes it is same x1 and x2.":"No it is'nt same x1 and x2.");
    printf("%s\n",sncmp(x1,x3,3)?"Yes it is same x1 and x2.":"No it is'nt same x1 and x2.");
}
int sncmp(char *s1, char *s2, int b){
    int i=0;
    while(i<b){
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }
    return 1;
}
