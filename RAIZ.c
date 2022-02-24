#include<stdio.h>
#include<math.h>

int main(){
	int numero, raiz;
	
	printf("DIGITE EL NUMERO: ");
	scanf("%i",&numero);
	
	raiz = sqrt(numero);
	
	if(raiz >= 1){
		printf("LA RAIZ DE SU NUMERO ES: %i",raiz);
	}
	else{
		printf("LA RAIZ ES UN NUMERO IMAGINARIO");
	}
	
	return 0;
}
