#include <stdio.h>


int main ()
	{
	unsigned int i;
	unsigned char carac = 1;
	printf ("Tabela ASCII.\n");
		while (carac != 0)	
		{
		printf ("Digite um numero de caractere entre 1 e 254. Aperte 0 para sair.\n");
		scanf ("%d", &carac );
		if (carac != 0)
			{
			if ((carac > 254) || (carac <= -1))
				{
				printf ("Caractere fora dos limites da tabela.\n");
				} else {
				printf ("Seu caractere eh: %c\n", carac);	
				}
			
			}
		}
	return (0);	
	}



