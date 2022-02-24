#include<stdio.h>

int main(){
	float nota;
	
	printf("DIGITE LA NOTA DE SU EXAMEN: ");
	scanf("%f",&nota);
	
	if (nota > 10.5){
		puts("EL ALUMNO ESTA APROBADO");
	}
	else{
	puts("EL ALUMNO NO APRUEBA");
	}
	
	
	return 0;
}
