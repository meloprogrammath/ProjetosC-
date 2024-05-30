#include <iostream>

int main(int argc, char** argv) {
	
	char nome[20];
	int idade;

    printf("Informe o nome: "); scanf("%[^\n]", &nome);
    printf("Informe a idade:"); scanf("%i", &idade);
    
    printf("\nSeu nome eh: %s\n", nome);
	printf("\nVoce tem %i anos! \n", idade);
	if(idade<7) {
    	printf("Voce ainda eh uma crianca");
	} else if(idade<=18){
		printf("Voce eh uam adolescente!");	
	} else {
		printf("Voce ja eh um velhinho!");
	}
	return 0;
}
