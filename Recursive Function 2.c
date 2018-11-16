/*
 * File: recursionfunction2.c
 * Purpose: Understant that how work recursive func.
 * Date: 2018-10-21
 * Author: serkan uysal
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Linux
 * Compile: gcc -std=c89 -Wall -Wpedantic \
                 recursionfunction2.c \
                 -o a.out */

#include <stdio.h>
int dndr();
int main(){

dndr();
}// main sonu

int dndr(){
static int a = 1;
static int counter = 1;
if (a<=50){
printf("%d-",a);
if (counter > 9){
printf("\n");
counter =1;
}// if2 sonu
counter++;
return dndr(a++);
} //if1 sonu

}//dndr fonksion sonu

