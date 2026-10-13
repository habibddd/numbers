#define N 32
#include<stdio.h>

int main(){
	int decimal, binary[N];
	printf("Insert number to convert: \n");
	scanf("%d", &decimal);
	if(decimal == 0){
		printf("0\n");
	} else{
		int counter = 0;
		for(int a = decimal; a != 0; a /= 2){
		binary[counter] = a % 2;
		counter++;
		}
		for(int i = counter - 1; i >= 0; i--){
		printf("%d", binary[i]);
		}
		printf("\n");
	}
	return 0;
}