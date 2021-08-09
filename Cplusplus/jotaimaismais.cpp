#include <stdio.h>

int main ()
	{
	char c = '0';
	
	c = '1';
	if ((c > '0') && !(c <= '1'))
		printf ( "%c" , c + 1);
	if ((c > '0') || !(c < '1'))
		printf ( "%c" , c );
			
	return ( 0 );		
	}
