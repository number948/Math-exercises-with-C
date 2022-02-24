#include<stdio.h>


int main(){
	int num1, num2;
	
	printf("Digite dos numeros: ");
	scanf("%i %i",&num1,&num2);
	
	if (num1 % num2 == 0){
		
		printf(" El numero %i es divisible por el numero %i",num1,num2);
	}
	
	return 0;
}
