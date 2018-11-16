/* File: ornek1.c
 * Purpose: ilk 3 saat 2 dolar sonrası için 0.50 dolar bir gün max 10 dolar
 * Date: 2018-11-01
 * Author: serkan uysal
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Linux
 * Compile: gcc -std=c89 -Wall -Wpedantic \
                 ornek1.c \
                 -o a.out */
#include <stdio.h>
#include <math.h>
int GarCul(float GarTime[]); //Prototype of Funct.
int main(){ // main start
	float time[3];
	printf("Please enter time of three cars in garage: ");
	for(int i = 0; i < 3; i++){
		scanf("%f",&time[i]);
		}
	// We gets hours of 3 customers
	GarCul(time);
	puts("");

} // main end

int GarCul(float GarTime[]){
	printf("Car\t\tHours\t\tCharge");
	int day = 0,other;
	float coast[3],totalhours=0;
	puts("");
	for(int i = 0; i<3; i++){
		printf("%d\t\t%.1f",i+1,GarTime[i]);
		totalhours += GarTime[i];
		GarTime[i] = ceil(GarTime[i]);
		if(GarTime[i] <= 3){
			coast[i] = 2;
			}
		if(GarTime[i] > 3 && GarTime[i] < 24){
			coast[i] = 2 + (( GarTime[i] - 3) * 0.5);
			}
		if(GarTime[i] >= 24){
			day = GarTime[i] / 24;
			GarTime[i] = (int)GarTime[i] % 24;
				if(GarTime[i] == 0){
					coast[i] = (day * 10);
					}
				
				if(GarTime[i] <= 3 && GarTime[i] != 0){
					coast[i] = 2 + (day * 10);
					}
				if(GarTime[i] > 3 && GarTime[i] <= 24){
					coast[i] = 2 + (( GarTime[i] - 3) * 0.5) + day * 10;
					}
				}
		
		printf("\t\t%.2f$\n",coast[i]);
		}


	printf("TOTAL\t\t%.2f\t\t%.2f$",totalhours,(coast[0]+coast[1]+coast[2]));

}
