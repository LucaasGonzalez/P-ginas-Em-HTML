// Programa em C:
// Programa que converte Celsius para Fahrenheit e Kelvin.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <stdio.h>

int main() {

  int i;
  float celsius;
  float fahrenheit;
  float kelvin;
  float media;
  
    for(i = 0; i <= 10; i++)
      
      {
        
        printf("\n\n");
        printf("Digite o valor da temperatura em Celsius: ");
        scanf("%f", &celsius);
    
        fahrenheit = celsius * 1.8 + 32;
        kelvin = celsius + 273;

        printf("\n");
        printf("os valores convertidos são: \n\n %.2f em Fahrenheit.\n %.2f em Kelvin. ", fahrenheit, kelvin);
        
        
      }

        media = fahrenheit + kelvin / 2;

        printf("A média entre os valores fornecidos é: %.f2 ", media);
    

  return 0;
}
