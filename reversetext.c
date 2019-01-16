#include "stdio.h"
void reversetext(char str[],int size);
int main(){
    char string[12]="SerkanUYSAL";
    puts(string);
    reversetext(string,12);
}
void reversetext(char str[],int size){
    int i=0;
    if(size>0){
        i=size-1;
        printf("%c",str[i]);
        return reversetext(str,i);
    }
}
