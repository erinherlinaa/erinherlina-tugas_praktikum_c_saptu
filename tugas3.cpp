#include<stdio.h>

int main(){
	int N;
	
	//input
	printf("Enter a number:");
	scanf("%d",&N);
	
	//Condition check
	if(N > 50){
		N = N - 25;
	}else{
		N = N + 10;
	}
	
	//Output
	printf("Output: %d\n", N);
	
	return 0;
	
}
