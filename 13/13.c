#include <stdio.h>

int main(){

	int totalObjetos, objetosFinais;
	float precoAluguel, faturamentoMensal, ganhoMultas, objetosDanificados, novosObjetos;

	printf("Quantidade de objetos no estoque: ");
	scanf("%d", &totalObjetos);

	printf("Preço de aluguel: ");
	scanf("%f", &precoAluguel);

	faturamentoMensal = (totalObjetos / 3) * precoAluguel;

	ganhoMultas = ((totalObjetos / 3) * 0.1) * (precoAluguel * 1.02);

	objetosDanificados = ((totalObjetos / 3.0) * 0.05) * 12;
	novosObjetos = totalObjetos * 0.10;

	objetosFinais = totalObjetos + novosObjetos - objetosDanificados;

	printf("\nFaturamento bruto mensal: %.2f", faturamentoMensal);
    printf("\nGanho com multas por mês: %.2f", ganhoMultas);
    printf("\nQuantidade de objetos no fim do ano: %d\n", objetosFinais);

    printf("Pressione ENTER para continuar...");
    getchar();
    getchar();

	return 0;
} //não sei se a lógica por tras está correta, acredito que faz o pedido no enunciado