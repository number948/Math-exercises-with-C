#include<stdio.h>

int main(){
	float algoritmos, parcial1, parcial2, parcial3, parciales, examen,
	examen_final, trabajo,trabajo_final;
	
	printf("Ingrese las notas de sus calificaciones parciales: ");
	scanf("%f %f %f",&parcial1, &parcial2, &parcial3);
	
	printf(" Ingrese la calificacion de su examen final: ");
	scanf("%f",&examen);
	
	printf("Ingrese la calificacion de su trabajo final: ");
	scanf("%f",&trabajo);
	
	
	parciales = ((parcial1 + parcial2 + parcial3)/3) * 0.55;
	
	examen_final = examen * 0.30;
	
	trabajo_final = trabajo * 0.15;
	
	algoritmos = (parciales + examen_final + trabajo_final);
	
	printf("\nSu calificacion final obtenida en la materia de algoritmos es: %.1f ",algoritmos);
	
	
	return 0;
}
