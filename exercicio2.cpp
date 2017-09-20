#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 main (){
setlocale (LC_ALL, "Portuguese");	

	float altura, 
	peso_ideal;

	char sexo[15];
	char masc[15] = "homem"; 	 // 1 jeito de declarar
	char fem[15] = "mulher"; 
		
	
	
		 
		printf ("Você é homem ou mulher\?\n");
		scanf("%s", sexo);
		
		printf ("Qual a sua altura em metros\?\n");
		scanf("%f", &altura);
		

	
		if (strncmp (masc, sexo, 6) == 0){
			peso_ideal = ((72.7*altura)-58);
			printf ("\nO peso ideal para sua altura é: %f\n\n", peso_ideal);	
			
	}
	
		else if (strncmp (fem, sexo, 7) == 0){
			peso_ideal = ((62.1*altura)-44.7);
			printf ("\nO peso ideal para sua altura é: %f\n\n", peso_ideal);
		}
		

		
system ("pause");
	
	
}
