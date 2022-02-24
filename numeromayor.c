#include<stdio.h>

int main(){
	int n1, n2;
	
	printf("DIGITE DOS NUMEROS: ");
	scanf("%i %i",&n1,&n2);
	
	if(n1 > n2){
		printf("EL MAYOR ES: %i",n1);
	}
	else 
	if(n2 > n1){
		printf("EL MAYOR ES: %i",n2);
	}
	else{
		printf("AMBOS NUMEROS SON IGUALES");
	}
	
	return 0;
}
