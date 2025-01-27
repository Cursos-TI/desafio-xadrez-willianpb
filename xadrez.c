#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    printf("\n***** Nível Novato ***** \n");
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movendo Bispo\n");
    for (int m = 0; m < movimentoBispo; m++)
    {
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int movimento = 0;
    printf("\nMovendo Torre\n");
    while (movimento < movimentoTorre)
    {
        printf("Direita\n");
        movimento++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    movimento = 0;
    printf("\nMovendo Rainha\n");

    do
    {
        printf("Esquerda\n");
        movimento++;
    } while (movimento < movimentoRainha);
    printf("\n***** Final Nível Novato ***** \n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n***** Nível Aventureiro ***** \n");
    int movimentoCavalo = 0;
    
    printf("\nMovendo Cavalo\n");
    while (movimentoCavalo < 1)
    {
        for (int mov = 0; mov < 3; mov++)
        {
            printf("Cima\n");
        }

        printf("Esquerda\n");
        movimentoCavalo++;
    }

    printf("\n***** Final Nível Aventureiro ***** \n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
