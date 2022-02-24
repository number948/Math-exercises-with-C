#include<stdio.h>


int main(){
	float salario, aumento, salario_final;
	
	printf("Ingrese el salario: ");
	scanf("%f",&salario);
	
	aumento = salario * 0.25;
	salario_final = salario + aumento;
	
	
	printf("El salario mas el aumento es:%.1f ",salario_final);
	
	
	return 0;
}
