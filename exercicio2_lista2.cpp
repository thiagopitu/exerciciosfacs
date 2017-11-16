/* Escreva um programa que solicite um número inteiro positivo e imprima o fatorial do numero informado. 
Valide a entrada de dados. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	setlocale (LC_ALL, "Portuguese");
	int numero;
	int fatorial = 1;
	do{
	printf ("Informe o fatorial a ser calculado: ");
	scanf ("%i", &numero);
	}
	while (numero<0);
		for (int i=numero; i>1; i--){
			
			fatorial *= i;
				
		}
printf ("O RESULTADO DE %i! = %i", numero,fatorial);
}
