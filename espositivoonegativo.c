#include<stdio.h>

int main(){
	int numero;
	
	printf("Ingrese el numero: ");
	scanf("%i",&numero);
	
	if (numero < 0) 
		puts(" es un numero negativo");
		
	else 
	   puts(" es un numero positivo");
	
	
	
	return 0;
}
