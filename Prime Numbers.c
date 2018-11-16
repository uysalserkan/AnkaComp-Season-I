#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x,y,z;
    printf("Please enter your integer (maximum lenght is 10): ");
    scanf("%d", &x);
    z = x-1;
   for (z; z > 1; z--) {
     if(x%(z) ==0){
     	y = x/z;
       printf(">> %d Integer can divide %d <<\n", x,z);
     }
     if(z==2 && x%(z) !=0){
     	printf("xx %d Integer could not divided any numbers.. xx\n", x);
	 }
     }
    return 0;
}
