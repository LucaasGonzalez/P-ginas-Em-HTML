// Programa em C:
// Programa que faz uma eleição com cinco possíveis candidatos e aparece o resultado.
// Se te ajudei com o código, me siga no instagram @xluucas.

#include <stdio.h>
int main()

{
  
	int voto = 1, votobranco=0, votonulo=0, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
	printf(":::::::::::::::- Programa de Votos -:::::::::::::::");
	
	while(voto != 0)
	
	{
    printf("\n\n");
    
		printf("\n\n 1 - Candidato 1. \n\n 2 - Candidato 2. \n\n 3 - Candidato 3. \n\n 4 - Candidato 4. \n\n 5 - Voto em Branco. \n\n 6 - Voto Nulo.");

    printf("\n\n");
    printf("\n\n - Ao terminar a contagem dos votos, digite '0' para mostrar o resultado das eleições na tela. ");
		
    
    printf("\n\n");
		printf("\n\n  - Digite o número correspondente ao seu candidato e aperte ENTER.");
    scanf("%i", &voto);
		
	
	
	switch(voto)
	
	{
		
		case 0:

    printf("\n\n");
		printf("\n Votação encerrada, obrigado por votar!");
		break;
		
		case 1:

    printf("\n\n");
		candidato1 = candidato1 + 1;
		printf("\n Você votou no Candidato 1, Obrigado por votar!");
		break;
		
		case 2:
      
		printf("\n\n");
		candidato2 = candidato2 + 1;
		printf("\n Você votou no Candidato 2, Obrigado por votar!");
		break;
		
		case 3:
      
		printf("\n\n");
		candidato3 = candidato3 + 1;
		printf("\n Você votou no Candidato 3, Obrigado por votar!");
		break;
		
		case 4:


    printf("\n\n");
		candidato4 = candidato4 + 1;
		printf("\n Você votou no Candidato 4, Obrigado por votar!");
		break;


    case 5:
      
		printf("\n\n");
		votonulo = votonulo + 1;
		printf("\n Você votou Nulo, Obrigado por votar!");
		break;
		
		case 6:
      
		printf("\n\n");
		votobranco = votobranco + 1;
		printf("\n Você votou em Branco, Obrigado por votar!");
		break;
		
    default:
      
		printf("\n\n");
		printf("\n Opção Invalida!");
		break;
	
    }

    }
  printf("\n\n");
  printf("\n\n");
  printf("\n\n");
  printf("\n\n");
  printf("\n\n");
  
  
	printf("\n\n Resultados: \n\n 1 - Candidato 1 = %d Votos \n\n 2 - Candidato 2 = %d Votos \n\n 3 - Candidato 3 = %d Votos \n\n 4 - Votos em Branco = %d Votos \n\n 5 - Votos Nulos = %d Votos ", candidato1, candidato2, candidato3, votonulo, votobranco);
return 0;
 
}

