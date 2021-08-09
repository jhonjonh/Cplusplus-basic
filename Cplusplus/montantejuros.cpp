//objetivo: o usuario deseja saber o rendimento de uma aplicacao
//financeira. montante = 1100,70 juros = 1,1% a.m.

#include <stdio.h>

float CalcRend ( float valor , float taxa , int prazoMeses )
	{
	return ((valor * taxa / 100) * prazoMeses);	
	}
	
	
int main ()
	{
		
	float resultado;
	
	printf ("resultado = R$ %.2f\n" , CalcRend ( 1100.7, 1.1, 6));
	
	return (0);	
	}
