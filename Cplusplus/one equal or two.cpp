#include <stdio.h>

int main ()
	{
	int i = 1;
	int j;
	do
		{
		j = i++;
		printf ("%d", j);
		}
	while (i <= 2);	
	return (0);
	}
