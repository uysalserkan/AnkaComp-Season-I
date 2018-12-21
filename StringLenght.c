#include "stdio.h"
void stringlen(char *s);
int main(void){
	char usrInput[200];
	gets(usrInput);
	stringlen(&usrInput[0]);
}

void stringlen(char *s){
	int counter=0;
	for(counter=0;s[counter]!='\0';counter++){
		;
	}
	printf("%d\n",counter);
}




/*
1. Write a userdefined function that computes the length of a string s. Your function prototype is int stringlen(char * s)
*/