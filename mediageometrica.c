#include<stdio.h>
#include<math.h>

int main(){
	float num1, num2, num3, num4,num5, media, numeros;
	
	printf("Ingrese los numeros: ");
	scanf("%f %f %f %f %f", &num1,&num2,&num3,&num4,&num5);
	
	
	numeros = num1* num2 * num3 * num4 *num5;
	media = pow(numeros,1. / 5);
	
	printf("\n La media geometrica es: %f",media);
	
	return 0;
	
	
}
