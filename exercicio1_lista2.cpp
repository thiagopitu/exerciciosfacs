/*Escreva um programa que efetue a soma de todos os números ímpares em um intervalo (a,b). Os limites de intervalo
deverão ser informados pelo usúario e validados pelo programa. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	setlocale (LC_ALL, "Portuguese");
	int a, b;
	int soma = 0;
	printf("Informe os limites da soma, sendo o primeiro maior que o segundo.\n\n");
	do {
		printf("Início do intervalo: ");
		scanf ("%i", &a);
		printf("\nFim do intervalo: ");
		scanf ("%i", &b);
	}
	while (a>b);
			for (int i=a+1; i<b; i++){
				if (i%2 != 0){
					soma = soma + i;
				}
			}
	printf("O resultado da soma entre o intervalo declarado é: %i\n\n", soma);
	system ("pause");
}



