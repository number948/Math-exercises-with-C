#include<stdio.h>

int main(){
	int base_M, base_m, area, altura;
	
	printf("Digite la base mayor del trapecio :");
	scanf("%i",&base_M);
	
	printf("Digite la base menor del trapecio :");
	scanf("%i",&base_m);
		
	printf("Digite la altura del trapecio :");
	scanf("%i",&altura);
	
	area = ((base_M + base_m)*altura)/2;
	
	printf("\nEl area del trapecio es: %i",area);
	
	
	
	return 0;
	
}
