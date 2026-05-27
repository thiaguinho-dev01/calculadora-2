#include <stdio.h>
//Desenvolvido por Thiago Bonfanti Guimarães, 1° DS

int multiplicar(int a, int b) 
{
    int resultado = 0;
    int negativo = 0;

    if (b < 0) 
    {
        b = -b;
        a = -a;
    }

    for (int i = 0; i < b; i++) 
    {
        resultado += a;
    }

    return resultado;
}
