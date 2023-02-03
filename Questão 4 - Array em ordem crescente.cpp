#include <stdio.h>
#include <locale.h>

#define total 10

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int number[total];
	int aux;
	
	printf("\nQuestão 4 - Prática 6");
	
	for(int i = 0; i < total; i++) {
		printf("\nInsira o %dº valor: ", i + 1);
		scanf("%d", &number[i]);
	}
	
	for(int i = 0; i < total; i++) {
		for(int x = (i + 1); x < total; x++) {
			if(number[i] > number[x]) {
				aux = number[i];
				number[i] = number[x];
				number[x] = aux;
			}
		}
	}
	
	for(int i = 0; i < total; i++) {
		printf("\n%dº valor: %d", i + 1, number[i]);
	}
	return 0;
}
