#include <stdio.h>

int main()
	{
	int a = 3;
	int b = 4;
	
	a = b;
	b = a;
	printf ( "%d%d" , a , b );
	return ( 0 );	
	}
