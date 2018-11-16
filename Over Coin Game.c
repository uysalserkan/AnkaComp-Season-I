/*
 * File: overitgame.c
 * Purpose: Coin flip game.
 * Date: 2018-10-21
 * Author: serkan uysal
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Linux
 * Compile: gcc -std=c89 -Wall -Wpedantic \
                 overitgame.c \
                 -o a.out */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Define libaries
int overit(int a); //prototype of funct.

int main(){ //main start
srand(time(NULL));
int guess,coin,dissituation;
char again;
printf("\t ::.Welcome to the coin flip game. \n");
printf("\t ::.Do you want to flip a coin? [Y for yes] \n");
scanf("%c",&again);
if(again=='Y' || again=='y'){
dissituation = 0;
	while(dissituation == 0){ //while iteration start
	coin=overit(coin);
	printf("\t ::.Machine fliped a coin. Let's guess HEAD (0) or TAIL (1)? \n");
	printf("\t ::.Please enter your guess: ");
	scanf("%d",&guess);
		if(guess==coin){ // if coin equals to coin statement start
			printf("\t ::.Exelent! Cong. you \n");
			printf("\t ::.Do you want to flip a coin again? [0 for yes] \n");
			scanf("%d",&dissituation);
			if(dissituation == 0){// if dissituation check start
				continue;
				}// if dissituation check end
			else{ // exit the program start
				printf("\t ::.See you next time.:: \n");
				break;
				} //exit the program end
		}// if coin equals to coin statement end
		else{ // not equal guess start
			printf("\t ::.Ahhh. You are unlucky for this coin. \n");
			printf("\t ::.Do you want to flip a coin again? [0 for yes] \n");
			scanf("%d",&dissituation);
			if(dissituation == 0){// if dissituation check start
				continue;
				}// if dissituation check end
			else{ // exit the program start
				printf("\t ::.See you next time.:: \n");
				break;
				} //exit the program end
	
		}// not equal guess end 

	} //while iteration end
}// if end
else
	printf("\t ::.See you next time.:: \n");


} //main end

int overit(int a){ //overit start
srand(time(NULL));
a = rand()%2;
return a;

} //overit end


