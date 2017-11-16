/* Escreva um programa que solicite dois n�meros inteiros positivos e determine se estes n�meros
s�o "amigos". Dois n�meros s�o amigos se um n�mero � igual a soma dos divisores do outro e vice-versa.
Na soma dos divisores, exclui-se o pr�prio n�mero.
Por exemplo, os n�meros 220 e 284 s�o "amigos".
Divisores de 220: 1+2+4+5+10+20+22+44+55+110=284
Divisores de 284- 1+2+4+71+142=220 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	
	setlocale (LC_ALL, "Portuguese");
	int numero1, numero2, validacao = 1, soma1=0, soma2=0;
printf("Digite dois n�meros inteiros e positivos para saber se s�o amigos.\n");

//validacao do numero1
printf("Primeiro valor: ");
	while (validacao == 1){			
			scanf ("%i", &numero1);
		if (numero1>0){
			validacao = 0;
		}
		else {
			printf ("Erro. Por favor, digite um n�mero INTEIRO e POSITIVO.\n");
		}
	}
//validacao do numero2	
printf("Segundo valor: ");
	while (validacao == 0){	
			scanf ("%i", &numero2);
		if (numero2>0){
			validacao = 1;
		}
		else {
			printf ("Erro. Por favor, digite um n�mero INTEIRO e POSITIVO.\n");
		}
	}
	
	//soma dos divisores do numero1
	for (int i = 1; i<= (numero1/2); i++){
		if (numero1%i==0){
			soma1 = soma1 + i;			
		}
	}

	//soma dos divisores do numero2
	for (int i = 1; i<= (numero2/2); i++){
		if (numero2%i==0){
			soma2 += i;
		}
	}
	
	//verifica��o se os numeros s�o amigos
				if (numero1==soma2 && numero2==soma1){
					printf("Os n�meros informados, %i e %i, s�o amigos.", numero1, numero2);
				}
				else{
						printf("Os n�meros informados, %i e %i, n�o s�o amigos.", numero1, numero2);
					
					}	
					
}
