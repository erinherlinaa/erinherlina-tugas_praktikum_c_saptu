#include <stdio.h>

int main()
{
	int num;
	
	//input bilangan bulat positif
	printf("Masukan bilangan bulat positif:")
	;scanf("%d", &num);
	
	//mengecek apakah bilangan bulat ganjil atau genap
	if (num % 2 ==0) {
		printf("GENAP\n");
	} else {
		printf("GANJIL\n");
	}
	return 0;
}
