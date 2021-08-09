#include <stdio.h>

int main ()
	{
		
/*
	int i = 17 / 4;
	char carac = 20;
	float valorf = 32e-1;
*/

	int a, b;
	char c[2];
	b = 5;
	printf ("Digite um numero entre 1 e 10 e tecle Enter\n");
	scanf ("%d",&a);
		if (a > 10) {
			printf ("Valor maior que 10");
		}else if (a < b) {
			printf ("Valor menor que 5");
		}else{
			printf ("Valor maior ou igual a 5");
		}
	
		
	return (0);		
	
/*
	printf ("Valor de carac = %c\n" ,carac);
	printf ("Valor de i = %d\n" ,i);
	printf ("Valor de valorf = %f\n" ,valorf);
*/
	}
