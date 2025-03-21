#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int numeroDeCasas = 5;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("============\nBispo\n============\n");
    int andarDoBispo = 0;

    while (andarDoBispo < numeroDeCasas){
        printf("Cima\nDireita\n");
        andarDoBispo++;
    };

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n============\nTorre\n============\n");
    int andarDaTorre = 0;

    do {
        printf("Direita\n");
        andarDaTorre++;
    } while (andarDaTorre < numeroDeCasas);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n============\nRainha\n============\n");
    int andarDaRainha = 0;

    for (int andarDaRainha = 0; andarDaRainha < numeroDeCasas; andarDaRainha++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n============\nCavalo\n============\n");
    int andarDoCavalo = 0;

    while(andarDoCavalo < numeroDeCasas){

        for(int i = 0; i < 2; i++ ){
            printf("Cima\n");
        }

        printf("Direita\n");
        andarDoCavalo++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
