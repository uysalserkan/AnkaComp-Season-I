#include "stdio.h"
#define SIZE 100
void StrCopy(char *first, char *second, int value);
int GetSize(char *first);
int main(int argc, char const *argv[])
{
	char str1[SIZE];
	char str2[SIZE];
	int size;
	printf("Enter your first string: ");
	gets(str1);
	printf("Enter your second string: ");
	gets(str2);
	printf("How many want to add String 1 to String 2: ");
	scanf("%d",&size);
	StrCopy(str1,str2,size);
	printf("Your changed string is: ");
	puts(str2);
}

int GetSize(char *first){
	int loop;
	for(loop=0;first[loop]!='\0';loop++){
		;
	}
	return loop;
}

void StrCopy(char *first, char *second, int value){
	int loop,length;
	length=GetSize(second);
//	second[length]=' ';
	for(loop=0;loop<value;loop++){
		second[length++]=first[loop];
	}
	second[length]='\0';
}



/*
Write a user defined version of function strncpy(s,t,n) which copies n characters of t to s.
*/