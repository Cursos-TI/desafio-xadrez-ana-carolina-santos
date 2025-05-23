#include <stdio.h>

// Função recursiva para movimento da Torre (5 casas para a direita)
void moverTorre(int casas, int atual) {
    if (atual > casas)
        return;
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1);
}

// Função recursiva para movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casas, int atual) {
    if (atual > casas)
        return;
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1);
}

// Função recursiva para movimento do Bispo usando loops aninhados
// Bispo se move na diagonal para cima-direita (vertical + horizontal)
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0)
        return;

    for (int h = 1; h <= casasHorizontais; h++) {
        printf("Cima Direita (Vertical %d, Horizontal %d)\n", casasVerticais, h);
    }
    moverBispo(casasVerticais - 1, casasHorizontais);
}

// Movimento complexo do Cavalo: duas casas para cima e uma para a direita usando loops aninhados
void moverCavalo() {
    int verticalMov = 2;
    int horizontalMov = 1;

    printf("Movimento do CAVALO (\"L\" para Cima e Direita):\n");

    int i = 0, j = 0;
    while (i < verticalMov) {
        printf("Cima (%d)\n", i + 1);
        i++;

        // Loop interno para o movimento horizontal, que só ocorre depois de subir 2 casas
        if (i == verticalMov) {
            for (j = 0; j < horizontalMov; j++) {
                printf("Direita (%d)\n", j + 1);

                // Exemplo de controle de fluxo: só um movimento, então break após imprimir
                if (j + 1 == horizontalMov)
                    break;
            }
        }

        // Continue só é útil se precisasse pular algo, aqui só ilustração
        if (i < verticalMov)
            continue;
    }
}

int main() {
    // Definindo as quantidades de casas a mover
    const int casasTorre = 5;
    const int casasBispoVert = 3;  // vertical
    const int casasBispoHorz = 3;  // horizontal
    const int casasRainha = 8;

    printf("Movimento da TORRE (recursivo):\n");
    moverTorre(casasTorre, 1);

    printf("\nMovimento do BISPO (recursivo + loops aninhados):\n");
    moverBispo(casasBispoVert, casasBispoHorz);

    printf("\nMovimento da RAINHA (recursivo):\n");
    moverRainha(casasRainha, 1);

    printf("\n");

    // Movimento do Cavalo com loops complexos
    moverCavalo();

    return 0;
}