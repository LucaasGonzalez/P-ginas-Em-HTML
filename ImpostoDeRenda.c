// Programa em C:
// Programa que calcula o imposto de renda que você terá que pagar a partir do seu salário.
// Se te ajudei com o código, me siga no instagram @xluucas.


#include <stdio.h>

int main() {
  
  float calculoImposto = 0;
  float resultado = 0;
  
  printf("Digite o seu salário para calcular o desconto de Imposto de Renda: ");
  scanf("%f", &calculoImposto);


  if(calculoImposto <= 1903.98)

  {
    printf("\n\n Isento de Imposto de Renda.");
  }
  
  else if (calculoImposto >= 1903.99 && calculoImposto <= 2826.65)

  {
    resultado = (calculoImposto * 0.075) - 142.8;
    printf("\n\n Dedução de R$ 142.80.");
  }

  else if (calculoImposto >= 2826.66 && calculoImposto <= 3751.05)

  {
    resultado = (calculoImposto * 0.15) - 354.8;
    printf("\n\n Dedução de R$ 354.80.");
  } 

  else if (calculoImposto >= 3751.06 && calculoImposto <= 4664.68)
    
  {
    resultado = (calculoImposto * 0.225) - 636.13;
    printf("\n\n Dedução de R$ 636.13.");
  }

  else if (calculoImposto >= 4664.68)

  {
    resultado = (calculoImposto * 0.275) - 869.36;
    printf("\n\n Dedução de R$ 869.36.");
  }
  
  printf("\n\nO valor do seu salário liquido é de: R$ %.2f" , calculoImposto - resultado);
  return 0;
}
