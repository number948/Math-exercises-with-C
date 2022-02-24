#include<stdio.h>
#include<math.h>

int main(){
	float hipotenusa, cateto1, cateto2;
	
	printf("Digite el valor de ambos catetos");
	scanf("%f %f",&cateto1,&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
   printf("\n La hipotenusa es: %.2f",hipotenusa);
	
	
	
	
	
	return 0;
}
