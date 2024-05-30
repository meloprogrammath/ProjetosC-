#include <stdio.h>
#include <stdlib.h>
main () {
    int qtd = 0;
    printf("Quabtos alunos deseja cadastrar?");scanf("%i",&qtd);
    
    float notas[qtd];
    int i;
    
    for (i = 0; i < qtd; i++) {
        printf ("Digite a nota do aluno %d: ", i+1);
        scanf ("%f", &notas[i]);
    }
    
    float soma = 0;
    for (i = 0; i < qtd; i++) {
        soma = soma + notas[i];
        printf ("Nota %d = %.1f\n", i+1, notas[i]);
    }
    
    float media = soma / qtd;
    printf ("Media das notas = %.1f\n", media);
    system ("PAUSE");
}


