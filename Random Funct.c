#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
srand(time(NULL));
int a=1,b;
for(a;a<10;a++){
b = rand()%2;
printf("%d \t",b);
}
}
