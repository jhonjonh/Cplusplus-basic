#include <stdio.h>
#include <string.h>

int main ()
 	{
 	int i;
	char str1[30], str2[30];
	
 	printf ( "Entre com uma frase\n" );
	gets ( str1 );
	i = 0;
	while (str1[i] != 0)
	 printf ( "%d " , str1[i++] );
	printf ( "\n" );
	strcpy ( str2 , str1 );
	printf ( "%s\n" , str2 );
	if (strcmp ( str1 , str2 ) == 0)
	 printf ( "As strings sao iguais\n" );
	 else
	 printf ( "As strings sao diferentes\n" );
	 return ( 0 );
}
