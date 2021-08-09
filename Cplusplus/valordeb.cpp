#include <stdio.h>

int main ()
	{
	int x = 1;
	int num = 2;
	int quad = 4;
	
	while (quad <= x) {
		num++;
		quad = num * num;
		}
	printf ( "%d" , num);		
	
	
	return (0);
	}
