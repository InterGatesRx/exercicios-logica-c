#include <stdio.h>

int main(){

	float num1, num2, num3, result;

	printf("Primeiro valor: \t");
	scanf(" %f", &num1);

	printf("Segundo valor: \t");
	scanf(" %f", &num2);

	printf("Terceiro valor: \t");
	scanf(" %f", &num3);

	result = (num1 + num2 + num3) / 3;
	printf("%.2f\n", result);

	printf("\nPressione ENTER para sair...");
	getchar();
	getchar();

	return 0;
}