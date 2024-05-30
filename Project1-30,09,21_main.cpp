#include <iostream>

int main(int argc, char** argv) {
	float faixaInicial=0, incremento=0, faixa=0, salario=0,salDia=0,salHora=0;	
	printf("Faixa inicial:        " );  scanf("%f", &faixaInicial);
	printf("Incremento por faixa: " );  scanf("%f", &incremento);
	
	for(faixa=1; faixa<=8; faixa++){
		salario = faixaInicial + ( incremento * (faixa-1) );
		salDia  = salario / 30;
		salHora = salDia / 8;
		printf("%.0f  %8.2f  %8.2f   %8.2f \n", faixa, salario, salDia, salHora );
	}
	return 0;
}
