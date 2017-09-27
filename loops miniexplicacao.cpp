#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// loops

 main (){
	
	int count = 0;
	int x ;
	char c[100];
	
	
	
	while ( count<100 /* condition */   ) {
		// executed when the condition is checked.
		
		// do something
		
		count ++;
		
	}
	
	printf ("%i", count);
	
	system ("pause");
	
	

	
	for ( int x = 0; x < 100; x++) {
		
		/* could use the concept of:
		continue;
		break;
		*/
		c[x]=0;
		printf ("%c", c);
		
		//subrotine executed until x >= 100
		
	}
	
	
	for ( int x=0; x<100; x++) {
		if ( x == 2){
			continue;
		}
		//do something
	}
	
}
