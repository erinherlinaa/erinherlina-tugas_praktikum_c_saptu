#include<stdio.h>

int main(){
	int bilangan;
	
	//input bilangan bulat positif
	printf("Masukkan bilangan bulat positif:");
	scanf("%d",&bilangan);
	
	//Cek apakah bilangan tersebut positif
	if (bilangan <0){
		printf("Silahkan masukkan bilangan bulat positif.\n");
		return 1;	//Mengakhiri program jika input negatif
	}
	
	//cek ganjil atau genap
	if(bilangan %2==0){
		printf("GENAP\n");
	}else{
		printf("GANJIL\n");
	}
	
	return 0;
}
