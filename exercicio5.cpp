#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main (){
setlocale (LC_ALL, "Portuguese");
	int saque;
	int nota5 = 5, nota10 = 10, nota50 = 50, nota100 = 100;
	int resto1, resto2, resto3, resto4;
	
	printf ("Possíveis notas:\nR$5\nR$10\nR$50\nR$100\n\n");
	
	printf ("Indique o valor de saque: ");
	scanf ("%i", saque);
	printf ("%i", saque);
	system ("pause");
	return 0;
}
