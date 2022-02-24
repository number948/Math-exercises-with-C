#include<stdio.h>

int main(){
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	if (numero % 2 == 0){
		printf("Es un numero par");
	}
    
	if(numero % 2 != 0){
		printf("Es un numero impar");
	}	
	
	return 0;
}
