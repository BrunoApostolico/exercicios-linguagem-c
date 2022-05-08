/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void inserir(int num[]){
    
    for (int i=0; i<3;i++){
    printf("Informe um numero no indice %d: ",i+1);
    scanf("%d",&num[i]);    
    }
    
}

void imprimir(int num[]){
    for (int i=0; i<3; i++){
        printf("O dobro do valor no indice %d: %d\n",i+1,num[i]*2);
    }
}
int main()
{
    int numero[3];
    printf("Preenchendo o vetor: \n");
    inserir(numero);
    printf("Imprimindo o vetor: \n");
    imprimir(numero);
    return 0;
}
