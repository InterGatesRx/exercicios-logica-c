#include <stdio.h>
#include <math.h>

int main() {
    float c1, c2, h;

    printf("Digite o comprimento do primeiro cateto (em cm): ");
    scanf("%f", &c1);

    printf("Digite o comprimento do segundo cateto (em cm): ");
    scanf("%f", &c2);

    h = sqrt(c1 * c1 + c2 * c2);

    printf("O comprimento da hipotenusa é: %.2f cm\n", h);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}