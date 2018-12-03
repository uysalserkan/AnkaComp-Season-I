#include "stdio.h"
int main(int argc, char const *argv[]) {
  int min,mid,max,i,key=34, arr[11]={1,3,4,5,7,8,10,12,18,23,34};
  min = 0; max=10; mid=(min+max)/2;
  while (key!=arr[mid]) {
    if (key<arr[mid]) {
      max=mid-1;
      printf("max: %d\n",max);
    }
    if (key>arr[mid]) {
      min=mid+1;
      printf("min: %d\n",min);
    }
    if (min>max) {
      printf("-1\n");
      return 0;
    }
    mid=(min+max)/2;
    printf("new mid: %d\n",mid);
  }
  printf("%d\n",mid+1);
  return 0;
}
