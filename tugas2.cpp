#include<stdio.h>

int main(){
	int N;
	
	//Input biangan N
	printf("Masukkan bilangan N:");
	scanf("%d",&N);
	
	//Cek kondisi N
	if (N > 50){
		N = N - 10; //N = N - 10
	}else{
		N = N - 25; //N = N  25
	}
	
	//Output nilai N
	printf("Nilai N setelah proses: %d\n",N);
	
	return 0;
	
}
