/* ESCREVA UM PROGRAMA QUE SOLICITE AO USU�RIO UM N�MERO INTEIRO POSITIVO, VALIDANDO O VALOR DIGITADO, E IMPRIMA TODOS OS DIVISORES DO N�MERO INFORMADO
(EXCETO O PR�PRIO N�MERO) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	setlocale (LC_ALL, "Portuguese");
	int numero, validacao = 1;
printf("Digite um n�mero inteiro e positivo para saber seus divisores:\n");
	while (validacao == 1){			
			scanf ("%i", &numero);
		if (numero>0){
			validacao = 0;
		}
		else {
			printf ("Erro. Por favor, digite um n�mero INTEIRO e POSITIVO.\n");
		}
	}
	printf("Os divisores desse n�mero s�o:\n");
	for (int i = 1; i<= (numero/2); i++){
		if (numero%i==0){
			printf("%i\n", i);
		}
	}

}
