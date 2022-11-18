// Programa em C:
// Estoque para um mercado pequeno.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <stdio.h>

int main() {

float valor [10], quantValor [10], salario, salarioTotal, maiorValor = 0, soma = 0.0; 
int i, posicao = 0, maiorQuantidade, quantVendida [10];

printf("\n\n:::::::::: MERCADINHO DA ESQUINA :::::::::: \n\n");

  for (i = 0; i <= 9; i++) {

    printf("\nDigite a quantidade de objetos vendidos: ");
    scanf("%d" , &quantVendida [i]);
  
    printf("\nDigite o valor do produto: ");
    scanf("%f" , &valor [i]);

      quantValor [i] = quantVendida [i] * valor [i];


    printf("\n-----------------------------------------------------\n");
  
    printf("\nTotal de produtos vendidos: %d Produtos" , quantVendida [i]);
    printf("\n\nValor unitário de cada produto: R$ %.2f" , valor [i]);
    printf("\n\nValor total vendido por produto: R$ %.2f\n" , quantValor [i]);
  
    printf("\n-----------------------------------------------------\n");
  
  }

  printf("\n\n:::::::::::::::- RESUMO DE VENDAS -::::::::::::::: \n\n");
    
  for ( i = 0; i <= 9; i++) {
    
    soma = soma + quantValor [i];
    
    }
  
  printf("\nValor total de vendas: R$ %.2f\n", soma);

    salario = soma * 0.05;
  
  printf("\nValor de comissão para o funcionário: R$ %.2f\n" , salario);

    salarioTotal = salario + 400;
  
  printf("\nSalário total do funcionário: R$ %.2f\n" , salarioTotal);

  for ( i = 0; i <= 9; i++) {
    
    if (valor [i] > maiorValor) {

    maiorValor = valor [i];
    maiorQuantidade = quantVendida [i];
    posicao = i;
      
       }

    }

  printf("\nMaior valor vendido foi R$ %.2f." , maiorValor);
  
  printf("\n\nMaior quantidade vendida foi %d Produtos." , maiorQuantidade);
  
  printf("\n\nEstá na %dª posição do vetor." , posicao);


  }
