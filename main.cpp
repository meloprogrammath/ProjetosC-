#include <iostream>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <string> 
using namespace std;

int main(int argc, char** argv) {
	
	char dia[3]="", mes[4]="", ano[5]="";
	
	printf("Na tela a seguir, voce vera sobre DATA e HORA do sistema\n\n");
	system("ver");
	system("pause");
	system("cls");

	strncat(mes, __DATE__ +0, 3 );	
	strncat(dia, __DATE__ +4, 2 );	
	strncat(ano, __DATE__ +7, 4 );	
	
	printf("012345678901234567890\n" );
	printf("%s \n", __DATE__ );
	
	printf("dia: %s \n", dia );
	printf("Mes: %s \n", mes );
	printf("Ano: %s \n\n\n", ano );
	
	char hora[2]="", minuto[2]="", seg[2]="";
	printf("012345678901234567890\n" );
	printf("%s \n", __TIME__ );
	
	strncat(hora,   __TIME__ +0, 2 );	
	strncat(minuto, __TIME__ +3, 2 );	
	strncat(seg,    __TIME__ +6, 2 );	
	printf("Hora:    %s \n", hora );
	printf("Minuto:  %s \n", minuto );
	printf("Segundo: %s \n", seg );
	
	/*
	int hr;
	hr = stoi(hora);
	if(hora>18){
		printf("\nBoa noite!\n");
	}
	*/
	
	
	return 0;
}

