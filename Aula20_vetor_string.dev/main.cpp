#include <string.h>
#include <string>
#include <ctype.h>

#define TAM 10		// Isso é uma constante

int main(int argc, char** argv) {
	//                         0      1       2      3      4      5     6      7       8     9       
	float enfermaria[TAM] = {165.00,173.25,181.91,191.01,200.56,210.59,221.12,232.17,243.78,255.97};		
	float Apartamento[TAM] = {181.50,190.58,200.10,210.11,220.61,231.65,243.23,255.39,268.16,281.57} ;			
	int Faixa[TAM] = {-1,18,23,28,33,38,43,48,53,60};
	
	printf("Linha\t Faixa\t\t Enfermaria\t Apartamento \n");	
	int x = 0;	
	while( x < TAM )  
	{
		if (x==9) {
			printf("%2i\t    > %i\t ", x+1, Faixa[x] );	
		} else {
			printf("%2i\t %2i - %i\t ", x+1, Faixa[x]+1, Faixa[x+1] );
		}
		printf("%5.2f\t\t %5.2f\n", enfermaria[x], Apartamento[x]);
		x++;
	}

	return 0;
	
}



