#include "stdio.h"
#define ROW 3
#define COLOMN 5
int main() {
  int i, j, k, min=100, max=0, myArray[ROW][COLOMN];
  for (i = 0; i < ROW; i++)
    for (j = 0; j < COLOMN; j++) {
      scanf("%d",&myArray[i][j]); // Get input from user into myArray
      if (min > myArray[i][j])   //  Desicion about minimum value at the myArray
        min = myArray[i][j];    //   Assign into minimum if condition is true.
      if (max < myArray[i][j])  //  Desicion about maximum value at the myArray
        max = myArray[i][j];   //   Assign into maximmu if condition is true.
    }
  printf("Minimum: %d \nMaximum: %d\n",min,max);
}
