#include <iostream>

int main(int argc, char** argv) {
	
	int n=0, numero = 0;
	printf("Qual valor sera calculado? " ); scanf("%i", &numero);
	do {
		
		n++;
		printf("%i x %i = %i\n", n, numero , n*numero);
		
	} while (n<10);
	
	printf("fim de jogo!");
	return 0;
}
