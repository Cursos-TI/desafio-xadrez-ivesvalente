#include <stdio.h>

// --- Movimento da Torre (Recursivo) ---
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita (Recursivo)\n");
        moverTorreRecursivo(casas - 1);
    }
}

// --- Movimento do Bispo (Recursivo) ---
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Diagonal (Recursivo)\n");
        moverBispoRecursivo(casas - 1);
    }
}

// --- Movimento da Rainha (Recursivo) ---
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda (Recursivo)\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre (Recursivo)\n");
    int casasTorre = 5;
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // Movimento do Bispo (Recursivo e com Loops Aninhados)
    printf("Movimento do Bispo (Recursivo e com Loops Aninhados)\n");
    int casasBispoRecursivo = 3;
    moverBispoRecursivo(casasBispoRecursivo);
    printf("\n");

    printf("Movimento do Bispo (Com Loops Aninhados)\n");
    int movimentoVerticalBispo = 3;
    int movimentoHorizontalBispo = 2;
    for (int i = 0; i < movimentoVerticalBispo; i++) {
        printf("Vertical Bispo %d\n", i + 1);
        for (int j = 0; j < movimentoHorizontalBispo; j++) {
            printf("  Diagonal Bispo %d\n", j + 1);
        }
    }
    printf("\n");

    // Movimento da Rainha (Recursivo)
    printf("Movimento da Rainha (Recursivo)\n");
    int casasRainha = 8;
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // Movimento do Cavalo (Loops Aninhados Complexos)
    printf("Movimento do Cavalo (Loops Aninhados Complexos)\n");
    int movimentoVerticalCavalo = 2;
    int movimentoHorizontalCavalo = 1;

    for (int cima = 0; cima < movimentoVerticalCavalo; cima++) {
        printf("Cima %d\n", cima + 1);
        for (int direita = 0; direita < movimentoHorizontalCavalo; direita++) {
            if (cima == movimentoVerticalCavalo - 1) {
                printf("  Direita %d\n", direita + 1);
            }
        }
    }

    printf("\n");

    return 0;
}