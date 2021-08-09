#include <stdio.h>

int main ()
	{
	int x = 3, y = -3;
	
	if (!(y < 0))
		y = x;
		printf ("%d%d\n" , y , x );
		printf ("instrucao depois do if");			
	return (0);	
	}
