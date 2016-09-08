#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

float soma (float valor1, float valor2){
        return valor1 + valor2;  
}

float subtrair (float valor1, float valor2){
        return valor1 - valor2;  
}

float multiplicar (float valor1, float valor2){
        return valor1 * valor2;  
}

float dividir (float valor1, float valor2){
        return valor1 / valor2;
}

float calcular (float valor1, char op, float valor2){
        char operador;      
  
        switch (op){
            case 'A':
                operador = '+';
                printf ("\n\nResultado = %.2f %c %.2f = %.2f\n\n", valor1, operador,valor2, soma(valor1,valor2));
                break;
            case 'S':
                operador = '-';
                printf ("\n\nResultado = %.2f %c %.2f = %.2f\n\n", valor1, operador,valor2, subtrair(valor1,valor2));
                break;
            case 'M':
                operador = '+';
                printf ("\n\nResultado = %.2f %c %.2f = %.2f\n\n", valor1, operador,valor2, multiplicar(valor1,valor2));
                break;
            case 'D':
                operador = '/';
                printf ("\n\nResultado = %.2f %c %.2f = %.2f\n\n", valor1, operador,valor2, dividir(valor1,valor2));
                break;
        }
}

void flush(){
  
  int ch;
  
  do ch = fgetc(stdin); while(ch != EOF && ch != '\n');

}