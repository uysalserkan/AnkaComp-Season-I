/* File: 1729006.c
 * Purpose: This program can sorting, adding, and find the index number in the array which is given by user. (Purpose in line 116-122)
 * Date: 2018-11-30
 * Author: Serkan UYSAL
 * Email: serqkanseko [at] gmail [dot] com
 * Platform: Kali Linux 2018.4a
 * Compile: gcc -std=c99 \
 *                 xxxx.c \
 *                  -o a.out             */
#include "stdio.h"
#include "stdlib.h"
#define SIZE 11

/* [TR]
Not: Normalde Tek fonksiyonda (DiziyiSiralaveYazdir) siralayip ve yazdiracaktim,
    fakat fonksiyon içi hem çok gereksiz uzadı ve iki küçük fonksiyonun yapabileceği
    şeyi tek fonksiyonda yapmak saçma geldi. Bunun yerine iki küçük fonksiyon
    (DizyiSirala ve DiziyiYazdir) oluşturup onlarla programı devam ettirdim fakat
    önceki fonksiyonu (DiziyiSiralaveYazdir) silmedim, o kadar uğraştım sonuçta :D.
*/

/* [TR]
Not2: Normalde direkt sıralı olarak okumak için bir fonksiyon (KeyDegeriniBul)
      yazdım fakat quiz pdf'sinde yazan Binary Search için bir fonksiyon
      (BinaryIleKeyDegeriniBul) yazdım ama diğer fonksiyonu (KeyDegeriniBul)
      silmedim çünkü ona da az bişi uğraştım ve güzelde çalılıyor hani :D.
*/

void DiziGirdisiniAl(int AlinacakDizi[SIZE]);
//void DiziyiSiralaveYazdir(int SiralanacakDizi[SIZE]);
void DiziyiSirala(int SiralanacakDizi[SIZE], int Boyut);
void DiziyiYazdir(int YazilacakDizi[SIZE], int Sira);
//int KeyDegeriniBul(int SiraliDizi[SIZE], int KEYValue);
int BinaryIleKeyDegeriniBul(int Siralidizi[SIZE], int KEYValue);

int main(void) {
 int KullaniciDizisi[SIZE]={0},KullaniciAnahtari;
 DiziGirdisiniAl(KullaniciDizisi);
 scanf("%d",&KullaniciAnahtari);
 DiziyiSirala(KullaniciDizisi,SIZE-1);
 DiziyiYazdir(KullaniciDizisi,SIZE-1);
 DiziyiSirala(KullaniciDizisi,SIZE);
 DiziyiYazdir(KullaniciDizisi,SIZE);
 //DiziyiSiralaveYazdir(KullaniciDizisi);
 //printf("%d",KeyDegeriniBul(KullaniciDizisi,KullaniciAnahtari));
 printf("%d",BinaryIleKeyDegeriniBul(KullaniciDizisi,KullaniciAnahtari));
 puts("");
}
// Main Fonksiyonu burada bitiyor!

void DiziGirdisiniAl(int AlinacakDizi[SIZE]){
  int loop;
  for (loop = 0; loop < SIZE; loop++) {
    scanf("%d",&AlinacakDizi[loop]);
  }
}
// DiziGirdisiniAl Fonksiyonu burada bitiyor!

/*void DiziyiSiralaveYazdir(int SiralanacakDizi[SIZE]){
  int loop1,loop2,send,tempvalue;
  for (loop1 = 0; loop1 < SIZE-2; loop1++) {
    for (loop2 = loop1+1; loop2 < SIZE-1; loop2++) {
      if (SiralanacakDizi[loop1]>SiralanacakDizi[loop2]) {
        tempvalue=SiralanacakDizi[loop1];
        SiralanacakDizi[loop1]=SiralanacakDizi[loop2];
        SiralanacakDizi[loop2]=tempvalue;
      }
    }
  }
  for (send = 0; send < SIZE-1; send++) {
   printf("%d ",SiralanacakDizi[send]);
  }
  puts("");
  for (loop1 = 0; loop1 < SIZE-1; loop1++) {
    for (loop2 = loop1+1; loop2 < SIZE; loop2++) {
      if (SiralanacakDizi[loop1]>SiralanacakDizi[loop2]) {
        tempvalue=SiralanacakDizi[loop1];
        SiralanacakDizi[loop1]=SiralanacakDizi[loop2];
        SiralanacakDizi[loop2]=tempvalue;
      }
    }
  }
  for (send = 0; send < SIZE; send++) {
   printf("%d ",SiralanacakDizi[send]);
  }
  puts("");
}
//DiziyiSiralaveYazdir Foknsiyonun Sonuna Gelindi! */

void DiziyiSirala(int SiralanacakDizi[SIZE], int Boyut){
  int loop1,loop2,tempValue;
  for (loop1 = 0; loop1 < Boyut-1; loop1++) {
    for (loop2 = loop1 + 1; loop2 < Boyut; loop2++) {
      if (SiralanacakDizi[loop2]<SiralanacakDizi[loop1]) {
        tempValue=SiralanacakDizi[loop2];
        SiralanacakDizi[loop2]=SiralanacakDizi[loop1];
        SiralanacakDizi[loop1]=tempValue;
      }
    }
  }
}
// DiziyiSirala Fonksiyonun Sonuna Gelindi.!

void DiziyiYazdir(int YazilacakDizi[SIZE], int Sira){
  int Dongu;
  for (Dongu = 0; Dongu < Sira; Dongu++) {
    printf("%d ",YazilacakDizi[Dongu]);
  }
  puts("");
}
//DiziyiYazdir Fonksiyonun Sonuna Gelindi!

/*int KeyDegeriniBul(int SiraliDizi[SIZE], int KEYValue){
  int iteration;
  for (iteration = 0; iteration < SIZE; iteration++) {
    if (KEYValue==SiraliDizi[iteration]) {
      return iteration+1;
    }
  }
  return -1;
} */
// KeyDegeriniBul Fonksiyonu burada sonlanıyor..

int BinaryIleKeyDegeriniBul(int Siralidizi[SIZE], int KEYValue){
  int bottom=0,upper=SIZE-1,mid=(bottom+upper)/2;
  while (KEYValue != Siralidizi[mid]) {
    if (KEYValue>Siralidizi[mid]) {
      bottom=mid+1;
    }
    if (KEYValue<Siralidizi[mid]) {
      upper=mid-1;
    }
    if (bottom>upper) {
      return -1;
    }
    mid=(bottom+upper)/2;
  }
  return mid+1;
}
// BinaryIleKeyDegeriniBul Fonksiyonu burada bitiyor!


/*
Write a C program that :
1. firstly, give 10 values from user
2. secondly, sort an array
3. thirdly, add given value to the array without using another array
4. finally, find and print index the given value from the array with binary search.
*/
/*
Sample Input:
3 7 18 8 10 34 23 5 12 1 4 7
Sample Output:
1 3 5 7 8 10 12 18 23 34
1 3 4 5 7 8 10 12 18 23 34
5
*/
