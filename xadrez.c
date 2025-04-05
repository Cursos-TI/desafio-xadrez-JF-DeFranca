#include <stdio.h>

// Movimento do Bispo: Diagonal Cima + Direita
void movimentoBispo(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Bispo se move: Cima + Direita\n");
    }
}

// Movimento da Torre: Direita, recursivo
void movimentoTorre(int casas){
    if (casas > 0){
        printf("Torre se move: Direita\n");
        movimentoTorre(casas - 1);
    }
}

// Movimento da Rainha: Esquerda, recursivo
void movimentoRainha(int casas){
    if (casas > 0){
        printf("Rainha se move: Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// Movimento do Cavalo: 3 pra cima e 1 pra direita
void movimentoCavalo(int vezes){
    for (int i = 0; i < vezes; i++) {
        printf("Cavalo se move: Cima\n");
        printf("Cavalo se move: Cima\n");
        printf("Cavalo se move: Cima\n");
        printf("Cavalo se move: Direita\n");
    }
}

int main(){

    printf("\n--- Movimento do Bispo (5 diagonais Cima + Direita) ---\n");
    movimentoBispo(5);

    printf("\n--- Movimento da Torre (5 casas para a Direita) ---\n");
    movimentoTorre(5);

    printf("\n--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    movimentoRainha(8);

    printf("\n--- Movimento do Cavalo (1 vez: 3 Cima + 1 Direita) ---\n");
    movimentoCavalo(1);

    return 0;
}
