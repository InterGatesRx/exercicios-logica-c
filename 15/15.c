#include <stdio.h>

int main() {
    char baldeAzul = 'Y'; //Não entendi como fazer com String
    char baldeAmarelo = 'B';
    char temporario; //Só consegui pensar em uma maneira que cria uma váriavel a mais, talvez tenha alguma mais otimizada

    printf("Balde Azul: %c\n", baldeAzul); //antes
    printf("Balde Amarelo: %c\n", baldeAmarelo);

    temporario = baldeAmarelo;
    baldeAmarelo = baldeAzul;
    baldeAzul = temporario;

    printf("Balde Azul: %c\n", baldeAzul); //depois
    printf("Balde Amarelo: %c\n", baldeAmarelo);

    printf("Pressione ENTER para continuar...");
    getchar();

    return 0;
}
