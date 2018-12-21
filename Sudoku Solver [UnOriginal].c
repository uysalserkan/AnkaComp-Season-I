// #SERKAN UYSAL 
// #1729006 
// 10-12-2018
// Sudoku Solver
#include "stdio.h"
#define SIZE 9
int UygunlukDurumu(int Dizi[SIZE][SIZE],int satir, int sutun, int Value);
int DiziyiDoldur(int Dizi[SIZE][SIZE],int satir, int sutun);
void DiziTara(int Tara[SIZE][SIZE]);
void DiziYaz(int Yaz[SIZE][SIZE]);
//Ana fonksiyon işlendi çalıştırıldı.
int main(void){
	int usrArray[SIZE][SIZE];
	DiziTara(usrArray);
	if(DiziyiDoldur(usrArray,0,0)){
		DiziYaz(usrArray);
	}
}
//UygunlukDurumu fonksiyonu işlendi...
int UygunlukDurumu(int Dizi[SIZE][SIZE],int satir, int sutun, int Value){
	int BaslangicSatiri;
	int BaslangicSutunu;
	int loop;
	BaslangicSatiri = (satir/3)*3;
	BaslangicSutunu = (sutun/3)*3;	
	
	for(loop=0;loop<SIZE;loop+=1){
		if(Dizi[satir][loop]==Value){
			return 0;
		}
		if(Dizi[loop][sutun]==Value){
			return 0;
		}
		if(Dizi[BaslangicSatiri + (loop%3)][BaslangicSutunu+(loop/3)]==Value){
			return 0;
		}
	}
	return 1;
}
//DiziyiDoldur fonksiyonu işleniyor.
int DiziyiDoldur(int Dizi[SIZE][SIZE],int satir, int sutun){
	int loop;
	if(satir<9 && sutun<9){
		if(Dizi[satir][sutun] != 0){
			if((sutun+1)<9){
				return DiziyiDoldur(Dizi,satir,sutun+1);
			}
			else
				if((satir+1)<9) 
					return DiziyiDoldur(Dizi,satir+1,0);
			else return 1;
		}
		else{
			for(loop=0;loop<SIZE;loop+=1){
				if(UygunlukDurumu(Dizi,satir,sutun,loop+1)){
					Dizi[satir][sutun]=loop+1;
					if((sutun+1)<9){
						if(DiziyiDoldur(Dizi,satir,sutun+1))
							return 1;
						else Dizi[satir][sutun]=0;							
					}
					else if((satir+1)<9){
							if(DiziyiDoldur(Dizi,satir+1,0))
								return 1;
							else
								Dizi[satir][sutun]=0;
							
						}
					else return 1;
				}
			}
			return 0;
		}
	}	
	else return 1;
}
//DiziTara fonksiyonu işlendi doğru çalıştırıldı
void DiziTara(int Tara[SIZE][SIZE]){
	int i,j;	
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			scanf("%d",&Tara[i][j]);
		}
	}
}
//DiziYaz fonksiyonu işlendi ve doğru çalıştırıldı
void DiziYaz(int Yaz[SIZE][SIZE]){
	int i,j;	
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			printf("%d ",Yaz[i][j]);
		}
		puts("");
	}
}



/*sample Input
0 4 5 8 0 3 7 1 0
8 1 0 0 0 0 0 2 4
7 0 9 0 0 0 5 0 8
0 0 0 9 0 7 0 0 0
0 0 0 0 6 0 0 0 0
0 0 0 4 0 2 0 0 0
6 0 4 0 0 0 3 0 5
3 2 0 0 0 0 0 8 7
0 5 7 3 0 8 2 6 0
*/

/*sample Output
2 4 5 8 9 3 7 1 6
8 1 3 5 7 6 9 2 4
7 6 9 2 1 4 5 3 8
5 3 6 9 8 7 1 4 2
4 9 2 1 6 5 8 7 3
1 7 8 4 3 2 6 5 9
6 8 4 7 2 1 3 9 5
3 2 1 6 5 9 4 8 7
9 5 7 3 4 8 2 6 1
*/
