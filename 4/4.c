#include <stdio.h>

int main(){

	int a, b;
	a = 5;
	b = 2 * a / 2;
	a *= 3;
	b *= 2;
	if (b % 2 == 0){
		a = b / 2;
	}
	printf("A: %d, B: %d\n",a ,b );

	printf("\nPressione ENTER para sair...");
	getchar();

	return 0;
}