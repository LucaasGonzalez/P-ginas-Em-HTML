// Programa em Python:
// Laço for simples.
// Se te ajudei com o código, me siga no instagram @xluucas.


#include <stdio.h>

int main()

{
  int i = 2;
  int num[50]; // vetor para guardar os 50 numeros

  // Função básica do while:
  // Somar de 2 em 2 até 100:
  
  //while(i <= 100)
  //  {
      
  //    printf("numero %d\n", i);
   //   i = i + 2;
      
   // }
  
  
for (i = 1; i <=50; i++)
    
  {
    printf("digite um número: ");
    
    scanf("%d", &num[i - 1]);
    
    printf("o dobro desse número vale: %d\n", 2 * num[i - 1]);
    
  }
  
  return 0;
}
