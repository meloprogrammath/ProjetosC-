#include <iostream>

int main(int argc, char** argv) {	
	int ct, qtd = 0;
	float N1, N2, N3, m, TotMed, Maior, Menor = 0;	
	printf("Informe qde alunos: "); scanf("%i", &qtd);	
	for (ct=1; ct<= qtd; ct++) {
		printf("Informe 1a nota do aluno %i: ", ct); scanf("%f", &N1);
		printf("Informe 2a nota do aluno %i: ", ct); scanf("%f", &N2);
		printf("Informe 3a nota do aluno %i: ", ct); scanf("%f", &N3);
		m = (N1+N2+N3) / 3;
		printf("Media do aluno %i eh = %.2f \n\n", ct, m);
		TotMed += m;   //TotMed = TotMed + m;
		if (m<Menor || Menor==0){
			Menor = m;
		}
		if (m>Maior || Maior==0){
			Maior = m;	
		}
	}
	printf("Total Alunos: %i \n", qtd);
	printf("Media Alunos: %.2f \n", TotMed / qtd ); 
	printf("Maior Media:  %.2f \n", 0);
	printf("Menor Media:  %.2f \n", 0);
	
	system("PAUSE");
	
	return 0;
}



