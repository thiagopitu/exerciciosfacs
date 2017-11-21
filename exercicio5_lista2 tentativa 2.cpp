/* 
Escreva um programa que calcule e imprima o valor de PI utilizando pelo menos vinte termos de cada série. 
O seu programa deverá informar, ainda, qual das séries (o somatório ou produtório) converge mais rapidamente. 
Considere para isto que o valor de PI? 3.141592653589793
Séries em anexo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	setlocale (LC_ALL, "Portuguese");
	
	double numerador1, denominador1, numerador2, denominador2, denominador3, soma1=0, soma2=0, count1=0, count2=0;
	int sinal = +1;
	
		

		int  i=0;
	/*	
		do {
			
			numerador1= 4;
			denominador1= i+1;
			soma1 += sinal*(numerador1/denominador1);
			sinal = -sinal;
			count1++;
			i +=2;
			printf("%.f\n", count1);
			printf("%.6f\n", soma1);
			
		}
		while (soma1 != 3.141592);
		
		
		system ("cls");
		printf("Foram utilizados %.f termos da série somatório para chegar no resultado de Pi=3.141592653589793", count1);
		system ("pause");
		*/
		
		// sinal = +1;

		//serie de multiplicacao pt1	
				 i=1;
				 soma2+=4;
		do {printf("%i=i\n", i);
			printf("antes do count\n");
			
				 
			numerador2= (2*i);
			denominador2= numerador2+1;
			denominador3= numerador2-1;
			
			soma2 *= (numerador2/denominador2);
			count2++;
			printf("%f/%f\n", numerador2, denominador2);
			printf("%.f=count\n", count2);
			printf("%.15f\n\n", soma2);
		
			
			i ++;
			
		//		pt2
		
			numerador2= (2*i);
			denominador2= numerador2+1;
			denominador3= numerador2-1;
		
			
			soma2 *= (numerador2/denominador3);
			count2++;
			printf("%f/%f\n", numerador2, denominador3);
			printf("%.f=count\n", count2);
			printf("%.15f\n", soma2);	
			
			
		}
		while (soma2 != 3.141592653589793);
		
		system ("cls");
		printf("Foram utilizados %.f termos da série produto para chegar no resultado Pi=3.14159265353589793", count2);
		system ("pause");
		
				if (count1>count2){
					printf("A série de produto utilizou menos termos para chegar no resultado.");
				}
				else {
					printf("A série de soma utilizou menos termos para chegar no resultado.");
				}

	system ("pause");
}
