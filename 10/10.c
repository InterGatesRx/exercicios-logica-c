#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a nota da 1 prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da 2 prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da 3 prova: ");
    scanf("%f", &nota3);

    printf("Digite a nota da 4 prova: ");
    scanf("%f", &nota4);

    media = (nota1 * 3 + nota2 * 2 + nota3 * 1 + nota4 * 4) / (3 + 2 + 1 + 4);

    printf("A média é: %.2f\n", media);

    printf("Pressione ENTER para continuar...");
    getchar();
    getchar();

    return 0;
}