#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main (){
	
setlocale(LC_ALL, "Portuguese");

printf("CALCULADORA DE �NDICE DE MASSA CORPORAL(IMC)\n por: thiago barbosa\n\n\n");

	float peso, altura, imc;
		printf("Por favor, informe o peso, em quilogramas:");
		scanf("%f",&peso);
		
		printf("Agora informe a altura, em metros:");
		scanf("%f",&altura);
		
		imc=(peso/((altura)*(altura)));
		
				system ("pause");


	if (imc>30)	{	
		printf("\n\nO IMC �: %f", imc); printf(", e � considerado na classifica��o como Obeso.");
			}
			
	else {
	if (25<imc && imc<30) {
	
			
			printf("\n\nO IMC �: %f", imc); printf(", e � considerado na classifica��o como Acima do peso.");
			
		}
			
			else {
			
			if (18,5<imc && imc<25){
			
				 
					printf("\n\nO IMC �: %f", imc); printf(", e � considerado na classifica��o como Normal.");
					
				}
					
					else {
					
					if (imc<18,5){
					
						 
							printf("\n\nO IMC �: %f", imc); printf(", e � considerado na classifica��o como Abaixo do peso.");
				}
				
			}
		}
	}
	
						

		system ("pause");
		
	
	
	return 0;
}
