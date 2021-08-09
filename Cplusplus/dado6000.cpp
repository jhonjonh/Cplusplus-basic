#include <stdio.h>
#include <stdlib.h>

int main ()
 {
 int dado[6] = { 0 };
 int i,jogada;
 
 for (jogada = 1 ; jogada <= 6000 ; jogada ++)
 	dado[rand() %6]++;

 for (i = 0 ; i < 6 ; i++)
 	printf ( "face %d = %d\n" , i + 1 , dado[i] );
 	
 return ( 0 );
 } 
