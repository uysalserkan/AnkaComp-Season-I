#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"
void OtherFunctions();
void MemoryFunctions();
void SearchFunctions();
void ComparasionFunctions();
void ManipulationFunctions();
void StandartIOFunctions();
void StringConversionFunctoins();
void CharacterLibrary();
int main(int argc, char const *argv[]){
	//CharacterLibrary();
	//StringConversionFunctoins();
	//StandartIOFunctions();
	//ManipulationFunctions();
	//ComparasionFunctions();
	//SearchFunctions();
	//MemoryFunctions();
	//OtherFunctions();


}
void CharacterLibrary(){
	//isdigit girdinin rakam olup olmadığına bakıyor.
	printf("1 %s\n",isdigit('1')?"is a digit":"is a not digit");
	printf("A %s\n",isdigit('A')?"is a digit":"is a not digit");
	//isalpha girdiğin girdi harf olup olmadığına bakıyor..
	printf("A %s\n",isalpha('A')?"is a alpha":"is not a alpha");
	printf("1 %s\n",isalpha('1')?"is a alpha":"is not a alpha");
	//isalnum harf veya rakam olup olmadığına bakıyor
	printf("A %s\n",isalnum('A')?"is a alpha or letter":"is not a alpha or letter");
	printf("1 %s\n",isalnum('1')?"is a alpha or letter":"is not a alpha or letter");
	printf("@ %s\n",isalnum('@')?"is a alpha or letter":"is not a alpha or letter");
	//isxdigit girdinin hexadecimal formatının elamanımı ona bakıyor..
	printf("H %s\n",isxdigit('H')?"hexadecimal has it":"hexadecimal has not it");
	printf("A %s\n",isxdigit('A')?"hexadecimal has it":"hexadecimal has not it");
	//islower girdinin küçük harf oluduğuna bakıyor
	printf("A %s\n",islower('A')?"it is lower":"it is not lower");
	printf("a %s\n",islower('a')?"it is lower":"it is not lower");
	printf("1 %s\n",islower('1')?"it is lower":"it is not lower");
	//isupper girdinin büyükharf olduğuna bakıyor
	printf("A %s\n",isupper('A')?"it is upper":"it is not upper");
	printf("a %s\n",isupper('a')?"it is upper":"it is not upper");
	printf("1 %s\n",isupper('1')?"it is upper":"it is not upper");
	//tolower büyük harfi küçük yapar..
	printf("A %s a\n",tolower('A')?"will be":"Wont be");
	//toupper küçük harfi büyük yapar..
	printf("a %s A\n",toupper('a')?"will be":"wont be");
	//isspace boşluk karakterlerinden mi diye bakar
	printf("' ' %s\n",isspace(' ')?"Yes it is space character":"No it is not space character");
	printf("'A' %s\n",isspace('A')?"Yes it is space character":"No it is not space character");
	//iscntrl girdinin control karakter olup olmamasına bakıyor..
	printf("newline %s\n",iscntrl('\n')?"yes it is control character":"no it is not control character");
	printf("over a hundred %s\n",iscntrl('%')?"yes it is control character":"no it is not control character");
	//ispunct printing char or space digit letter 
	printf("; %s\n",ispunct( ';' ) ? " is a " : " is not a ");
	printf("Y %s\n",ispunct( 'Y' ) ? " is a " : " is not a ");
	printf("# %s\n",ispunct( '#' ) ? " is a " : " is not a ");
	//isprinting print karakteri olup olmadığına bakıyor
	printf("$ %s\n",isprint('$')?"Yes it is printing character":"no it isn't printing character");
	printf("/a %s\n",isprint('\a')?"Yes it is printing character":"no it isn't printing character");
	//isgraph boşluk veya print karakterden farklı olup olmadığına bakıyor
	printf("/a %s\n",isgraph('\a')?"Yes it is graph character":"no it is not graph character");
	printf("$ %s\n",isgraph('$')?"Yes it is graph character":"no it is not graph character");
	printf("' ' %s\n",isgraph(' ')?"Yes it is graph character":"no it is not graph character");


}

void StringConversionFunctoins(){
	char a[10]="8356ada na";
	char *aptr;
	//atof stringi doubleye çevirir
	printf("char array -> %s",a);
	printf(" will be double %f\n",atof(a));
	//atoi stringi integer e çevirir
	printf("char array -> %s",a);
	printf(" will be integer %d\n",atoi(a));
	//atol stringi long in e çevirir
	printf("char array -> %s",a);
	printf(" will be long integer %li\n",atol(a));
	//strtod stringi double ye atama yapar ve geri kalanını stringde bırakır
	printf("char array -> %s",a);
	printf(" value is %f and other side is ",strtod(a,&aptr));
	printf("%s\n",aptr);
	//strtol stringin sayılarını long a atar gerisini stringde bırakır 
	printf("char array -> %s",a);
	printf(" value is %ld and other side is ",strtol(a,&aptr,0));
	printf("%s\n",aptr);
	//strtoul unsing lon inte atar ve geri kalanı stringde bırakır
	printf("char array -> %s",a);
	printf(" value is %lu and other side is ",strtoul(a,&aptr,0));
	printf("%s\n",aptr);
}

void StandartIOFunctions(){
		//getchar klavyeden karakter alır.
		char a[80],b;
		if((b=getchar())==EOF)
		printf("%c",b);
		//fgets belli sayıda girdiyi arrayın içine alıyor stream funct ile.
		fgets(a,10,stdin);
		printf("%s",a);
		//puts arrayları bastırabilir
		puts(a);
		//sprintf string e degerleri alır.
		int x;
		double y;
		printf("enter an integer and a double");
		scanf("%d %lf",&x,&y);
		sprintf(a,"integer:%2d double %2.2f",x,y);
		printf("formatted a array is: %s",a);
		//sscanf ise arraylarde bulunan değerleri bölümüne ayırır.
		int z;
		double l;
		char s[]="535 25.08";
		sscanf(s,"%d %lf",&z,&l);
		printf("Sonraki degerleri %s, %d %f",s,z,l);

}

void ManipulationFunctions(){
	//strcpy b,yı a ya kopyalar
	char a[]="Ilk Array";
	char b[]="Ikinci array";
	strcpy(a,b);
	puts(a);
	//strncpy b'nin n karakterini a'ya kopyalar
	char c[]="Ilk Array";
	strncpy(c,b,6);
	puts(c);
	//strcat d yi a ya ekler.
	char d[]=" ucuncu array";
	strcat(a,d);
	puts(d);
	puts(a);
	//strncat n karakterini ekler 
	char e[]="sacma bisiler";
	strncat(a,e,10);
	puts(a);
	puts(e);

}
void ComparasionFunctions(){
	//strcmp tamamı aynı ise 0 değilse farklı bir değer döndürür.
	//strncmp baştan n tane karakter aynı ise 0 değilse farklı değer döndürür.
	char a[]="Karsilastirma birinci";
	char b[]="Karsilastirma birinci";
	char c[]="Karsilastirma ";
	printf("a-b: %d\n",strcmp(a,b));
	printf("a-c: %d\n",strcmp(a,c));
	printf("n a-c: %d\n",strncmp(a,b,13));
}

void SearchFunctions(){
	char a[]="Loram ipsaum falan filan";
	//strchr kelimeleri stringin içinde arar.
	printf("L %s\n",strchr(a,'L')?"dahil":"dahil degil");
	printf("C %s\n",strchr(a,'C')?"dahil":"dahil degil");
	//strcspn b dekilerin içindeki harflerden a da bulunan 
	//en yakın indexi atıyor.
	char b[]="L"; 
	printf("%lu\n",strcspn(a,b));
	//strpbrk ??
	//strrchr karakterle uyuşan son kelimeyi döndürür.
	printf("%s\n",strrchr(a,'f'));
	//strspn s2 içindeki harfleri s1 de arar ve değeri döndürür
	//ama döndüremedi :(
	char c[]="e";
	printf("%lu\n",strspn(a,c));
	//strstr s2 yi s1 de bulduğu noktadan sonrasını  yazdırır.
	char d[]="alan";
	printf("%s\n",strstr(a,d));
	//strtok token olarak ayırır s1 i s2 ile ve döndürür.
	char *tokenPtr;
	tokenPtr=strtok(a,"a");
	
	while(tokenPtr!=NULL){
		printf("%s\n",tokenPtr);
		tokenPtr=strtok(NULL,"a");
	}
	
}

void MemoryFunctions(){
	//memcpy s1 i s2 ye kopyalar.
	char a[]="This is a label";
	char b[16]="";
	memcpy(b,a,15);
	printf("%s\n",a);
	puts(b);
	//memcmp fonksiyonu aynı mı değil mi diye kontrol eder belirli sayıda 
	char c[]="This is a car without you";
	printf("%s\n",memcmp(a,b,4)?"Yes it is same 4 value":"No it is not 4 value");
	printf("%s\n",memcmp(a,b,6)?"Yes it is same 6 value":"No it is not 6 value");
	//memchr belirli harften sonrasını yazdırır.
	printf("%s\n",memchr(c,'w',25));
	//memset fonksiyonu ilk baştan kaç tanesine konulcaksa o kadar koyar belirlenen harfi stringe
	char d[]="SenSenSenSenSenSen";
	printf("First type of d: %s\n",d);
	memset(d,'S',9);
	printf("Second style of d: %s\n",d);
	//memmove fonksiyonu başa taşıma işlemini gerçekleştirir
	char e[]="Bu bir imzadir.";
	printf("First Style: %s\n",e);
	printf("Second style: %s\n",memmove(e,&e[7],2));
}

void OtherFunctions(){
	//strerror error mesajlarını string olarak bastırır ve 133 tanedir.
	for(size_t i=0;i<134;i++){
	printf("i[#] %s\n",strerror(i));
	}
	//strlen fonksiyonu stringleri alır ve %ld ile yazdırlır.
	const char mystring[]="Bu strlen fonksiyonu stringlerin boyunu ölçer..";
	printf("Array lenght is: %ld\n",strlen(mystring));
}
