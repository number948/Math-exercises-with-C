#include<stdio.h>

int main(){
	float celsius, fahrenheit;
	
	printf("Ingrese los grados en escala celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit = (celsius * 1.8) + 32;
	
	printf("\n Los grados Fahrenheit son: %.1f",fahrenheit);
	
	
	return 0;
}


//Lo hice solita, se me ocurrió la idea y todo!!
