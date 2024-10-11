#include <stdio.h>
#include <math.h>

//Fungsi untuk menghitung panjang sisi miring segitiga siku-siku
float hitungSisiMiring(float alas, float tinggi)
{
	return sqrt((alas * tinggi) * (tinggi * tinggi));
}
int main()
{
	float alas, tinggi, luas, keliling, sisiMiring;
	
	// Input panjang alas dan tinggi segitiga
	printf("Masukan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukan tinggi segitiga (cm): ");
	scanf("&f", &alas);
	
	//Menghitung Luas Segitiga
	luas = 0.5 * alas * tinggi;
	
	//Menghitung sisi miring segitiga
	sisiMiring = hitungSisiMiring(alas, tinggi);
	
	//Menghitung keliling segitiga
	keliling = alas + tinggi + sisiMiring;
	
	//Menampilkan hasil perhitungan
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}
