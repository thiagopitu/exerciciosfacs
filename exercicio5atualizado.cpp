 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main (){
setlocale (LC_ALL, "Portuguese");
	int saque;
	int nota5 = 5, nota10 = 10, nota50 = 50, nota100 = 100;
	int resto1, resto2, resto3, resto4;
	int a, b, c, d, e;
	
	
	printf ("Possíveis notas:\nR$5\nR$10\nR$50\nR$100\n\n");
	printf ("Indique o valor de saque: ");
	
	/* 
                                       
       700(saque)/nota100= 7 (a)
	   700(saque)%nota100= 80(resto4)
	   
	   80(resto4)/nota50= 1 (b)
	   80(resto4)%nota50= 30(resto3)
	   
	   30(resto3)/nota10= 3 (c)
	   30(resto3)%nota10= 0(resto2)
	   
	
	*/
	
	
	  a = saque/nota100;
	  resto4 = saque%nota100;
	  
	  b = resto4/nota50;
	  resto3 = resto4/nota50;
	  
	  c = resto3/nota10;
	  resto2 = resto3%nota10;
	  
	  d = resto2/nota5;
	  resto1 = 0;
             printf ("Quantidade de notas usadas: %i", a+b+c+d\n\n);
             printf ("%i notas de 5 reais, %i notas de 10 reais, %i notas de 50 reais, %i notas de 100 reais.", a, b, c, d);
	
	
	
	system ("pause");
	return 0;
}
