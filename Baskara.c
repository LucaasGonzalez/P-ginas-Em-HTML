// Programa em C:
// Programa que calcula o valor de Baskara.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <math.h>
#include <stdio.h>

int main() {

  int a, b, c, x1, x2, delta;

  printf("f(x) = ax² + bx + c\n\n");
  
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("c = "); scanf("%d", &c);
  
  delta = pow (b, 2) - 4 * a * c;
  x1 = (-b - sqrt(delta)) / (a * 2);
  x2 = (-b + sqrt(delta)) / (a * 2);

  if (delta == 0) {
    
    printf ("\n\nAs raizes não são iguais.");
    printf ("\n\n{%d, %d}", x1 , x2);
    printf ("\n\nDELTA = %d" , delta);
    
  }

  else if(delta > 0) {
    printf("\n\nAs raizes são diferentes.");
    printf("\n\n{%d, %d}", x1, x2);
    printf ("\n\nDELTA = %d" , delta);
  
  }

  else {
    printf("\n\nAs raizes são inexistentes.");
    
  }
  return 0;
    }
 
