#include <stdio.h>

int main(){

	float num1, num2, result;
	
	printf("Digite o primeiro Numero: \t");
	scanf(" %f", &num1);

	printf("Digite o segundo Numero: \t");
	scanf(" %f", &num2);

	result = num1 * num2;
	printf("O resultado da multiplicação é: %.2f", result);

	printf("\nPressione ENTER para sair...");
	getchar();
	getchar();

	return 0;
}