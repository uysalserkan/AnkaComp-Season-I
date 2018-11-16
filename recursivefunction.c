/*
 * File: recursivefunction.c
 * Purpose: Understant that how work recursive func.
 * Date: 2018-10-21
 * Author: serkan uysal
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Linux
 * Compile: gcc -std=c89 -Wall -Wpedantic \
                 recursivefunction.c \
                 -o a.out */

#include <stdio.h>
long long int recurse(long long int a){
if(a != 1){
	return a*(recurse(a-1));
}// if sonu
else{
return a;	
}// else sonu
}// recurse sonu

int main(){
long long int girdi, snc;
printf("Please enter an integer for calculate to factoriel: ");
scanf("%lld", &girdi);
snc = recurse(girdi);
printf("Your result is: %lld\n",snc);
}
