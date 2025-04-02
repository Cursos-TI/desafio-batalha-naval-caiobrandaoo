#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ei: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para eiibir as coordenadas de cada parte dos navios.// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Eipanda o tabuleiro para uma matriz 10i10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Eiiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Eiiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de eiibição das habilidades:
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
    // declaraçao da matriz
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        printf("\n");
    };

    //  nav1 = tabuleiro[2] = 3, tabuleiro[2][3] = 3, tabuleiro[2][4] = 3;
    // nav2 = tabuleiro[4][8] = 3, tabuleiro[5][8] = 3, tabuleiro[6][8] = 3;
    // posicionamento dos navios]
    // navio horiontal
    for (int i = 3; i <= 5; i++)
    {
        tabuleiro[2][i] = 3; // Coloca o navio (valor 3) nessas posições
    };
    // navio vertical
    for (int i = 3; i < 6; i++)
    {
        tabuleiro[i][8] = 3;
    };
    // navio diagonal
    for (int i = 5; i < 8; i++)
    {
        tabuleiro[i][i] = 3;
    };
    // adicionando habilidades
    // serao representadas pelo numero 5
    // habilidade 1
    // cruz
    for (int i = 3; i < 8; i++)
    {
        for (int j = 3; j < 8; j++)
        {
            if (i == 5 || j == 5)
            {
                tabuleiro[i][j] = 5;
            }
        }
    };
    // cone
    for (int i = 7; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 7 && j == 2)
            {
                tabuleiro[i][j] = 5;
            }
            else if (i == 8 && j > 0 && j < 4)
            {
                tabuleiro[i][j] = 5;
            }
            else if (i == 9 && j < 6)
            {
                tabuleiro[i][j] = 5;
            }
        }
    };
    // losango
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2 || j == 2)
            {
                tabuleiro[i][j] = 5;
            }
            else if(i==1&&j>0&&j<4||i==3&&j>0&&j<4){
                tabuleiro[i][j] = 5;
            }
        }
    }
    // exibiçao da matriz
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d", tabuleiro[i][j]);
        }

        printf("\n");
    };

    return 0;
}
