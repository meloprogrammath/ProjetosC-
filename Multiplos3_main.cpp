#include <iostream>

int main(int argc, char** argv) {
	
	int num=0, contador=1;
	
	printf("Digite um numero:"); scanf("%i",&num);
	
	while (contador <=num){
		
		if (contador%3==0){
			printf("Valor:%i\n",contador);
		}
		
		contador++;

	}
	printf("Numero digitado:%i - Resto: %i", num, num%3);	
	return 0;
}
