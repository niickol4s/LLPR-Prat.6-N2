#include <stdio.h>
#include <locale.h>
#define total 10

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number[total];
	int par = 0;
	
	printf("\nQuestão 3 - Prática 6");
	
	for(int i = 0; i < total; i++) {
		printf("\nInsira o %dº valor: ", i + 1);
		scanf("%d", &number[i]);
	}
	
	for(int i = 0; i < total; i++) {
		if(number[i] % 2 == 0) {
			par++;
		}
	}
	
	printf("\nQuantidade de valores pares: %d", par);
	
	return 0;
}
