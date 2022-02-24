#include<stdio.h>

#define PI 3.1416

int main(){
	float longitud, diametro;
	
	printf("Ingrese el diametro de su circunferencia :");
	scanf("%f",&diametro);
	
	longitud = diametro * PI;
	
	printf("\n La longitud de la circuferencia es : %.1f",longitud);
	
	
	
	return 0;
}
