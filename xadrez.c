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

    return 0; 
}