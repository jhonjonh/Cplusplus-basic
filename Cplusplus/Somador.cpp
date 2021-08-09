#include <stdio.h>
int main ()
 {
 int Num, soma = 0;
 int Contador = 0;
 while (Contador < 5)
 {
 printf ( "Entre com o numero %d\n" , ++Contador );
 scanf ( "%d", &Num );
 soma += Num;
 }
 printf ( "A soma e %d\n" , soma );
 return ( 0 );
 } 
