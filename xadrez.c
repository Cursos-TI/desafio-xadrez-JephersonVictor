#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movertorre (int movimento){
  if (movimento > 0) {
    movertorre (movimento  -1);
    printf("Direita\n");
  }
}

void moverBispo (int movimento1){
  if (movimento1 > 0) {
moverBispo (movimento1 -1);

  for (int i, j = 0 ; i, j < 1; i++, j++)
  {
  printf("Cima Direita\n", i, j);
  }
  
  }
}

void moverRainha (int movimento2){
  if (movimento2 > 0) {
    moverRainha (movimento2 -1);
    printf("Esquerda\n");
  }
}
int main() {
int i = 1;

// Implementação de movimento da Torre

printf("Movimento da Torre.\n");
movertorre(5);

printf("\n");
//Implementação de movimento do Bispo

printf("Movimento do Bispo.\n");
moverBispo(5);
 
printf("\n");
//Implementação de movimento da Rainha

printf("Movimento da Rainha.\n");
moverRainha(8);
printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo

    printf("Movimentação do Cavalo.\n");
    int k = 0;
 while (k <= 1){
  
 printf("Baixo\n");
 k++;
    
  }for (int i = 1; i <= 1; i++)
{   printf("Direita\n");
  
  
}

    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
