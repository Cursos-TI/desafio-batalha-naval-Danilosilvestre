#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios.

int main() {
    // Tabuleiro 10x10
    int tabuleiro[10][10] = {0}; 

    // Coordenadas para o navio horizontal.
    int linhaHorizontal = 2, colunaHorizontal = 3;
    
    // Posição do navio horizontal.
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3; // Marca com 3
    }

    // Coordenadas para o navio vertical.
    int linhaVertical = 5, colunaVertical = 7;

    // Posição do navio vertical.
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaVertical + j][colunaVertical] = 3;
    }

    // Exibe o tabuleiro
    printf("TABULEIRO BATALHA NAVAL:\n");

    // Exibe as colunas.
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", 'A' + i); 
    }
    printf("\n");

    // Exibe as linhas.
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

   

