#include "stdio.h"
#define SIZE 100
void Appendit(char *first, char *second);
int GetSize(char *first);

int main(int argc, char const *argv[])
{
	char str1[SIZE], str2[SIZE];
	printf("Please enter your first string: ");
	gets(str1);
	printf("Please enter your second integer: ");
	gets(str2);
	Appendit(str1,str2);
	printf("Your appened string is: ");
	puts(str1);
}

void Appendit(char *first, char *second){
	int loop, firstSize;
	firstSize = GetSize(first);
	first[firstSize]=' ';
	for(loop=0;second[loop]!='\0';loop++){
		first[++firstSize]=second[loop];
	}
}

int GetSize(char *first){
	int loop;
	for(loop=0;first[loop]!='\0';loop++){
		;
	}
	return loop;
}

/*
 Write  a  pointer  version  of  function  to  concatenate  two  string.  
 Your  function appends a copy of source string to the destination string
*/