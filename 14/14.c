#include <stdio.h>

int main() {
    int valor, resto;
    int notas200, notas100, notas50, notas20, notas10, notas5, notas2, moeda1;

    printf("Digite o valor: \t");
    scanf("%d", &valor);

// talvez exista algum modo que ocupe menos espaço e linhas

    notas200 = valor / 200;
    resto = valor % 200; //é possivel ir sobrescrevendo a váriavel resto durante o código

    notas100 = resto / 100;
    resto = resto % 100;

    notas50 = resto / 50;
    resto = resto % 50;

    notas20 = resto / 20;
    resto = resto % 20;

    notas10 = resto / 10;
    resto = resto % 10;

    notas5 = resto / 5;
    resto = resto % 5;

    notas2 = resto / 2;
    resto = resto % 2;

    moeda1 = resto / 1;

//não entendi como faço para quebrar linha sem precisar chamar outro printf
    printf("\nNota de 200: %d,\nNota de 100: %d,\nNota de 50: %d,\nNota de 20: %d,\nNota de 10: %d,\nNota de 5: %d,\nNota de 2: %d,\nMoeda de 1: %d", notas200, notas100, notas50, notas20, notas10, notas5, notas2, moeda1);

    printf("\nPressione ENTER para continuar...");
    getchar();
    getchar();

    return 0;
}
