#include "stdio.h"
#define SIZE 200
void PointerNotation(char *originalptr, char *copiedptr);
void ArrayNotation(char original[], char copied[]);
int main(int argc, char const *argv[])
{
	char usrInput[SIZE];
	char WillCopy[SIZE]="";
	char SecondCopy[SIZE]="";
	printf("Please enter your first string: ");
	gets(usrInput);
	PointerNotation(usrInput,WillCopy);
	printf("# [Pointer Notation] Your second string is: ");
	puts(WillCopy);
	ArrayNotation(usrInput,SecondCopy);
	printf("# [Array Notation] Your second string is: ");
	puts(SecondCopy);
	return 0;
}

void PointerNotation(char *originalptr, char *copiedptr){
	int loop=0;
	for(loop;originalptr[loop]!='\0';loop++){
		copiedptr[loop]=originalptr[loop];
	}
}

void ArrayNotation(char original[], char copied[]){
	int loop;
	for(loop=0;original[loop]!='\0';loop++){
		copied[loop]=original[loop];
	}
}

/*
Write a user-defined function which copies one string to another by using 1.Pointer notation 2.Array notation
*/