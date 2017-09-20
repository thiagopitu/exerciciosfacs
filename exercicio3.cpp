#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 main (){
 	setlocale (LC_ALL, "Portuguese");
	int ano,
	a, b, c, d, e, f, g, h, i, k, l, m,
	mes, dia;
	
	printf("Algoritmo para saber a data em que cairá o domingo de páscoa do ano desejado.\nPor: thiago barbosa\n\n\n");
	
	printf ("Informe o ano desejado: ");
	scanf("%i", &ano);
	a = (ano%19);
	b = (ano/100);
	c = (ano%100);
	d = (b/4);
	e = (b%4);
	f = ((b+8)/25);
	g = ((b-f+1)/3);
	h = ((19*a+b-d-g+15)%30);
	i = (c/4);
	k = (c%4);
	l = ((32+2*e+2*i-h-k)%7);
	m = ((a+11*h+22*l)/451);
	mes = ((h+l-7*m+114)/31);
	dia = (((h+l-7*m+114)%31)+1);
	
		printf ("\nO domingo de páscoa do ano de %i cairá na seguinte data: \n%i/%i.", ano, dia, mes);
		
		printf ("\n\n");
		system ("pause");
}
