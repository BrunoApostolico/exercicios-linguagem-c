/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int calculaQuadrado(int n){
    return n * n;
}

int main()
{
    int num=0;
    
    printf("Digite um Numero: ");
    scanf("%d",&num);

    printf("O Quadrado de %d é: %d",num,calculaQuadrado(num));
    return 0;
}
