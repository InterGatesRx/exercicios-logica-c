#include <stdio.h>

int main(){

	int num1;

	printf("Digite um numero: \t");
	scanf(" %d", &num1);

	int num1suc = num1 + 1;
	int num1ant = num1 - 1;

	printf("Sucessor: %d, Antecessor: %d", num1suc, num1ant);

	printf("\nPressione ENTER para sair...");
	getchar();
	getchar();

	return 0;
}