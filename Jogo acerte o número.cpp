	#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int num = 0, escolha = 0, quantidade = 0;
	
	srand( time(0) );
	num = rand() % 100 ;	
	printf("=== VOCE TEM 5 OPORTUNIDADES ===\n\n");
	do {	
		quantidade++;
		
		printf("Faca sua %ia. escolha - Digite um numero (0-99): ", quantidade);
		scanf("%i", &escolha);
		
		if (escolha<num){
			printf("Numero baixo... Escolha outro!\n\n");
		}
		if (escolha>num){
			printf("Numero alto... Escolha outro!\n\n");
		}
	} while ( escolha != num && quantidade < 5  );
	
	if (escolha==num){
		printf("Parabens, acertou em %i vezes\n\n", quantidade);
	} else {
		printf("Voce nao conseguiu em 5 vezes! Game over pra tu hahahaha");
	}
	printf("Numero correto: %i \n\n", num);
	
	return 0;
}
