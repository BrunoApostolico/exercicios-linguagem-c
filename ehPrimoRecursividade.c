/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/* função auxiliar ehPrimoAux(), que recebe, além do valor a ser verificado, um inteiro x, 
inicialmente 2, que será utilizado para calcular os divisores de 2 até n.
----
caso o número n seja divisível por x, então, a função deve retornar o valor 0, 
informando que o número não é um primo. Caso isso não aconteça até que x seja igual a n, então retorna-se 1. */

int ehPrimoAux(int n, int x){
    if (x==n){
        return 1;
    }else if (n%x==0){
        return 0;
    }else{
        return ehPrimoAux(n, x+1);
    }
}

//função ehPrimo() de modo que ela receba um parâmetro, 
//o valor a ser verificado e retorne um número inteiro: int ehPrimo(int n)
int ehPrimo(int n){
    int resultado = ehPrimoAux(n,2);
    return resultado;
}

int main()
{
    int num, resultado;
    printf("Digite um numero: ");
    scanf ("%d",&num);
    
    resultado= ehPrimo(num);
    if (resultado ==1){
        printf ("O numero %d é primo.",num);
    }else{
        printf("O numero %d não é primo.",num);
    }
    return 0;
}
