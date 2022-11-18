// Programa em C:
// Programa que mostra os multiplos de um número do 1 ao 100.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <stdio.h>

int main() {

int i = 0, usuario;


  printf("Digite um número para descobrir os Multiplos: ");
  scanf("%d" , &usuario);
  
  while(i <= 100) {
    
  printf("Os Multiplos deste número são:%d \n", i);
    
  i = i + usuario;
      
}

}
