#include <stdio.h>

int main ()
	{
	int m1, m2, m3;
	
	printf ("Insira a primeira medicao:\n");
	scanf ("%d", &m1);
	printf ("Insira a segunda medicao:\n");
	scanf ("%d", &m2);
	printf ("Insira a terceira medicao:\n");
	scanf ("%d", &m3);
	
	if ((m1>=m2)&&(m1>=m3)) {
		printf ("O maior valor 'e de %d cm\n", m1);
		} else if ((m2>=m1)&&(m2>=m3)) {
			printf ("O maior valor 'e %d cm\n", m2);
			} else {
				printf ("O maior valor 'e de %d cm\n", m3);
				}
								
	return( 0 );	
	}
	
	
	
	
	
	
	
