#include <stdio.h>

int main() {
    char character;
    char characterChain[250];
    int intNumber;
    float floatNumber;
    double doubleNumber;

    printf("Write a Character:\t");
    scanf(" %c", &character);

    printf("Write a Word:\t");
    scanf(" %s", &characterChain);

    printf("Write a Number:\t");
    scanf(" %d", &intNumber);

    printf("Write a Float Number:\t");
    scanf(" %f", &floatNumber);

    printf("Write a Double Number:\t");
    scanf(" %lf", &doubleNumber);

    printf("\nCharacter: %c\n", character);
    printf("Word: %s\n", characterChain);
    printf("Number: %d\n", intNumber);
    printf("Float: %.2f\n", floatNumber);
    printf("Double: %.4lf\n", doubleNumber);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
