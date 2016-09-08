#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculadora.c"

int main (){
  
  float valor1, valor2;
  char op;
  
  printf ("\nOperadores >>> [A(ADICAO), S(SUBTRACAO), M(MULTIPLICACAO), D(DIVISAO)]\n\n");
  
  fflush(stdin);
  printf ("Insira o Valor 1 >>> ");
  scanf ("%f", &valor1);
  
  do {
      flush();
      printf ("\nInsira o Operador >>> ");
      op = toupper(getchar());
      if (op != 'A' && op != 'S' && op != 'M' && op != 'D'){
          printf ("\nOperador Invalido.");
          op = '0';
      }
  }while (op == '0');
    
  do{
      fflush(stdin);
      printf ("\nInsira o Valor 2 >>> ");
      scanf ("%f", &valor2);
      if (valor2 == 0.00){
          printf ("\nDivisao Por Zero.");
      }
  }while (op == 'D' && valor2 == 0.00);
  
  calcular (valor1, op, valor2);
    
  return 0;
}