#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movertorre (int movimento){                   //condição de parada da recurção
  if (movimento > 0) {                             // condiçao para mover a torre uma casa a menos
    movertorre (movimento  -1);                     //
    printf("Direita\n");                            // imprime a direção do movimento.
  }
}                                                     // explicação vale para as outras recursividades a seguir!!!!!!!!

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
movertorre(5);                   //quantidade de casas que a peça deve se mover.

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

    // Nível Mestre - Funções Recursivas e Loops Aninhados


  
    return 0;
}
