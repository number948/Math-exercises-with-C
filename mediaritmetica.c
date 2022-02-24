#include<stdio.h>

int main(){
	int num1, num2, num3, media, cantidadnumeros;
	
	printf("Ingrese la cantidad de numeros que ocupara: ");
	scanf("%i",&cantidadnumeros);
	
	printf("\nIngrese los numeros:");
	scanf("%i %i %i",&num1,&num2,&num3);
	
	media = (num1 + num2 +num3) / cantidadnumeros;
	
	printf("\nLa media aritmetica entre los numeros es: %i",media);
	
	
	
	return 0;
}
