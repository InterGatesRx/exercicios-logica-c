#include <stdio.h>

int main(){

	float valor, gorjeta;

	printf("Valor bruto a ser pago (sem a gorjeta): \t");
	scanf(" %f", &valor);

	gorjeta = valor * 0.10;
	valor += gorjeta;

	printf("Gorjeta a ser paga (10%%): %.2f, \nTotal a ser pago: %.2f", gorjeta, valor); //repetir o % 2 vezes para aparecer como character no console

	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();

	return 0;
}