#include<stdio.h>
int main(){
	float total_compra, descuento, precio_final;
	
	printf("Ingrese el total de su compra: ");
    scanf("%f",&total_compra);
    
    descuento = total_compra * 0.15;
    
    precio_final = total_compra - descuento;
    
    printf("\n El precio final de su compra es: $%.2f",precio_final);
	
	
	
	return 0;
}
