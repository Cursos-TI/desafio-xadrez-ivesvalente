#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da torre \n");
    int casasTorre = 5;
    for (int movimentoTorre = 0; movimentoTorre < casasTorre; movimentoTorre++) {
        printf("Direita \n");
    }
    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo\n"); 
    int casasBispo = 5;
    int movimentoBispo = 0;
    while (movimentoBispo < casasBispo) { 
        printf("Diagonal \n");
        movimentoBispo++;
    }
    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha\n"); 
    int casasRainha = 8;
    int movimentoRainha = 0; 

    do {
        printf("Esquerda \n");
        movimentoRainha++;
    } while (movimentoRainha < casasRainha); 

     printf("\n"); // Linha em branco para separar o movimento do Cavalo

    // Movimento do Cavalo (usando for aninhado com while)
    printf("Movimento do Cavalo\n");
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    // Loop externo para o movimento vertical (duas casas para baixo)
    for (int i = 0; i < movimentoVertical; i++) {
        printf("Baixo\n");
        // Loop interno para o movimento horizontal (uma casa para a esquerda)
        int j = 0;
        while (j < movimentoHorizontal && i == movimentoVertical - 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0; 
}