#include <stdio.h>

int main(){
	float celcius, fahrenheit, reamur;
	
	//Input nilai suhu dalam celcius
	printf("Masukan suhu dalam Celcius: ");
	scanf("%f", &celcius);
	
	//Menghitung suhu dalam Fahrenheit dan Reamur
	fahrenheit = (celcius * 9 / 5) + 32;
	reamur = celcius * 4 / 5;
	
	//Menampilkan hasil konversi
	printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
		printf("Suhu dalam Reamur: %.2f\n", reamur);
		
		return 0;
}
