#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


  // Nível Novato - Movimentação das Peças


int main() {
  
    int i;
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;


     // MOVIMENTO DO BISPO 5 CASAS NA DIAGONAL SUPERIOR DIREITA (CIMA + DIREITA)
     printf ("Movimentando o Bispo: \n");
        for ( i = 0; i < movimentoBispo; i++) {

            printf ("Cima\n");
            printf ("Direita\n");
        }



     // MOVIMENTO DA TORRE 5 CASAS PARA DIREITA
     printf ("Movimentando a Torre: \n");
       for ( i = 0; i < movimentoTorre; i++) {

        printf ("Direita\n");
    }
    




     // MOVIMENTO DA RAINHA 8 CASAS PARA ESQUERDA
     printf ("Movimentando a Rainha: \n");
        for ( i = 0; i < movimentoRainha; i++) {

            printf ("Esquerda\n");
        
        }
        

        
























    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
