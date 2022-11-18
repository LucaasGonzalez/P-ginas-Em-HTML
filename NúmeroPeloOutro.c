// Programa em C:
// Programa que multiplica um número pelo outro.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <stdio.h>

// Programa que multiplica um número pelo outro:

int main() {

  int x, y, resultado, auxiliar;

  printf("Digite dois números: ");
  scanf("%d %d", &x, &y);

  resultado = 0;
  auxiliar = y;

  while (auxiliar > 0) {

    resultado = resultado + x;
    auxiliar = auxiliar - 1;
    
  }

  printf("\n Resultado: %d", resultado);

  return 0;
  
}
