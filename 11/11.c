#include <stdio.h>

int main(){

	float saldo, reajuste;

	printf("Insira o saldo para ser reajustado: \t");
	scanf(" %f", &saldo);

	reajuste = saldo * 1.10;

	printf("O valor com reajuste é: %.2f", reajuste);

	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();

	return 0;
}