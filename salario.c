#include<stdio.h>

int main(){
	float horas, valor_hora, salario;
	
	valor_hora = 1500;
	
	printf("Digite sus horas trabajadas en el mes: ");
	scanf("%f",&horas);
	
	salario = horas * valor_hora;
	
	printf("El salario de este mes será: $%.2f",salario);
	
	
	
	
	return 0;
}
