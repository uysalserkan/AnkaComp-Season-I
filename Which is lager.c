#include "stdio.h"
void cmpress(char *s1, char *s2);
int main(int argc, char const *argv[])
{
	char s1[200],s2[200];
	printf("Enter your first string: ");
	scanf("%s",s1);
	printf("Enter your second string: ");
	scanf("%s",s2);
	cmpress(s1,s2);
	return 0;
}
void cmpress(char *s1, char *s2){
	int counter=0;
	for(counter=0;counter>-1;counter++){
		if(s1[counter]=='\0'&&s2[counter]=='\0'){
		printf("0\n");
		break;
		}
		if(s1[counter]=='\0'&&s2[counter]!='\0'){
		printf("-1\n");
		break;
		}
		if(s2[counter]=='\0'&&s1[counter]!='\0'){
		printf("1\n");
		break;
		}
	}
}


/*
 Write a user-defined function that compares two string with each other. If first one 
is equal  to  second  returns  0,  greater  than  second returns  1  and  less  than  second returns -1
*/