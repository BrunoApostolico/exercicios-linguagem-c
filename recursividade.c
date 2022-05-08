/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fatorial(int n){
    
    if (n == 0){
        return n;
    }else{
        return n + fatorial(n-1);
    }
}

int main()
{
    int num, resultado;
    
    printf("Digite um Numero: ");
    scanf("%d",&num);

    resultado = fatorial(num);
    printf("O fatorial do Número %d é: %d",num,resultado);
    return 0;
}
