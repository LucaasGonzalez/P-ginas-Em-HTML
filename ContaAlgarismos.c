// Programa em C:
// Programa que conta a quantidade de algarismos que tem em um determinado número.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <stdio.h>

int main() {

int contaDigitos = 0, valor;

printf("Digite o número no qual deseja saber a quantidade algarismos: ");
scanf("%d", &valor);

if (valor == 0) contaDigitos = 1;
  
else
  
  while (valor != 0) {

    contaDigitos = contaDigitos + 1;
    valor = valor / 10;
    
  }

  printf("este número tem %d algarismos.\n", contaDigitos);
  return 0;

}
