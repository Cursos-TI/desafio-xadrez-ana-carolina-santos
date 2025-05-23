#include <stdio.h>

int main() {
    int i, j;

    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da TORRE (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("Movimento do BISPO (5 casas na Diagonal: Cima Direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("Movimento da RAINHA (8 casas para a Esquerda):\n");
    i = 1;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= 8);

    printf("\n");

    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda (loops aninhados)
    printf("Movimento do CAVALO (movimento em 'L': 2 casas para Baixo + 1 casa para Esquerda):\n");

    // Loop externo: movimento para baixo (usar for)
    for (i = 1; i <= 2; i++) {
        printf("Baixo (%d)\n", i);

        // Loop interno: movimento para esquerda (usar while)
        if (i == 2) { // Quando terminar de mover 2 para baixo, move 1 para esquerda
            j = 1;
            while (j <= 1) {
                printf("Esquerda (%d)\n", j);
                j++;
            }
        }
    }

    return 0;
}
