#include <iostream>

int main(int argc, char** argv) {
	int v1=5, v2=5;
	printf("\nENQUANTO:\n");
	while(v1<5){
		v1++;	
		printf("Valor de v1: %i \n", v1);
	}
	printf("\nREPITA:\n");
	do {
		v2++;
		printf("Valor de v2: %i \n", v2);	
	} while (v2<5);
	
	return 0;
}
