#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 main (){
setlocale (LC_ALL, "Portuguese");	

	float altura, 
	peso_ideal;

	char sexo[15];
	char masc[15] = "homem"; 	 // primeiro jeito de declarar
	char fem[15]; 
		
	strcpy (fem, "mulher");		 // segundo jeito de declarar
	
		 
		printf ("Você é homem ou mulher\?\n");
		fgets(sexo, sizeof(sexo), stdin);
		
		printf ("Qual a sua altura em metros\?\n");
		scanf("%f", altura);
		

	
		if (strcmp (masc, sexo) == 0){
			peso_ideal = ((72.7*altura)-58);
			printf ("O peso ideal para sua altura é: %f", peso_ideal);	
			
	}
	
		else if (strcmp (fem, sexo) == 0){
			peso_ideal = ((62.1*altura)-44.7);
			printf ("O peso ideal para sua altura é: %f", peso_ideal);
		}
		
		else {
		
		}
	
		

	
	
}
