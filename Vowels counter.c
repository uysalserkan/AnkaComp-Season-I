/* File: 17290066.c
 * Purpose: Take the vowels and print it with new line.
 * Date: 2018-11-16
 * Author: Serkan UYSAL
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Kali Linux 2018.4a
 * Compile: gcc -std=c99    \
 *                 17290066.c \
 *                  -o a.out             */
#include "stdio.h"
// main function starts here.
int main() {
  char a[100];
  int counter[5]={0};
  gets( a );, // This function take the statement from user with spacebar.
// For1 iteration starts here.
  for (size_t i = 0; i < 100; i++) { //This for loop takes the vowels into the counter array.
      switch (a[i]) {
        case 'a':
        counter[0]++;
        break;
        case 'e':
        counter[1]++;
        break;
        case 'i':
        counter[2]++;
        break;
        case 'o':
        counter[3]++;
        break;
        case 'u':
        counter[4]++;
        break;
      }
      if (a[i]=='.') {
        break;
      }
  }
//for1 iteration ends here.
//for2 iteration starts here.
  for (size_t j = 0; j < 5; j++) { //This for loop prints the stars with number.
    printf("%d",j);
    for (size_t k = 0; k < counter[j]; k++) {
      printf("*");
    }
    puts("");
  }
//for2 iteration ends here.
}
// main function ends here.
// main functions ends here.
