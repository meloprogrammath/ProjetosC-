#include <iostream>

int main(int argc, char** argv) {
	int num=0, soma=0;
	
	while(num>=0){
			printf("Digite um numero inteiro:");
			scanf("%i",&num);
			if(num>0){
					soma=soma+num;
			}
	}	
	printf("Somatorio: %i",soma);
	return 0;
}
