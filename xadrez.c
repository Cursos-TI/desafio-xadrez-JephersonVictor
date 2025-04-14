#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

// Implementação de movimento da Torre

int i = 1;

printf("Movimento da Torre\n");
while (i <= 5){
  printf("direita\n", i);
  i++;
}

//Implementação de movimento do Bispo
printf("Movimento do Bispo\n");

for (int i = 1; i < 5; i++){
printf("cima direita\n", i);
}

//Implementação de movimento da Rainha
int j = 1;
printf("Movimento da Rainha\n");
do
{
    printf("esquerda\n");
    j++;
} while (j <= 8);

   
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
