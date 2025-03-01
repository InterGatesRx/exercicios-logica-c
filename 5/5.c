#include <stdio.h>

int main(){

	float estoquemedio;
	int quantidademinima, quantidademaxima;

	printf("Quantidade Minima de Estoque:\t");
	scanf(" %d", &quantidademinima);

	printf("Quantidade Máxima de Estoque:\t");
	scanf(" %d", &quantidademaxima);

	estoquemedio = (quantidademinima + quantidademaxima) / 2;
	printf("Estoque médio: %.2f\n", estoquemedio);

	printf("\nPressione ENTER para sair...");
	getchar();
	getchar();

	return 0;
}