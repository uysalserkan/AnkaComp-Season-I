/*
 * File: gldivisior.c
 * Purpose: This program calculate greatest and lowest divisior of the number.
 * Date: 2018-10-21
 * Author: serkan uysal
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Linux
 * Compile: gcc -std=c89 -Wall -Wpedantic \
                 gldivisior.c \
                 -o a.out */
#include <stdio.h>
int divisiorfunc(int DivNumber); // prototype of the divisior function.

int main(){// main start
	int UsrNumber;
	printf("\t |:.Please enter your number: ");
	scanf("%d",&UsrNumber);
	divisiorfunc(UsrNumber);	
}// main end

int divisiorfunc(int DivNumber){ // Function start
	int a, b;
	a = DivNumber - 1;
	b = 2;
	while(a != 0){
		if(DivNumber % a == 0){
			printf("\t |:.The Biggest Divisior is: %d\n",a);
			break;
		}
		if(a == 2){
			break;
		}
		a--;
	}
	while(b != DivNumber + 1){
		if(DivNumber % b == 0){
			printf("\t |:.The Lowest Divisior is: %d\n",b);
			break;
		}
		b++;	
	}
} // Function end
