#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int a,b;
srand(time(NULL));
a = rand()%100 + 1;
for(int hak=5; hak>0; hak--){ // for basi

printf("Pleas enter a  number: ");
scanf("%d",&b);
if(a<b && hak > 0){
	printf("your number is greater than guess \n"); 
	
	} //if1 sonu
if(a>b && hak > 0){
	printf("your number is less than guess \n"); 
	
	}
if(a==b && hak > 0){
	printf("### your number is equal the guess \n"); 
	break;
	}
}//for sonu
printf("Guessed number is: %d\n",a);
}
