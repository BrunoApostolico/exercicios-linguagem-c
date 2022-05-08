/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float calcularMedia(float conjunto[], int tam){
    float soma=0;
    float media=0;
    
    for (int i=0;i<tam;i++){
        soma += conjunto[i];
    }
    media = soma / tam;
return media;    
}
int main()
{
    float media=0;
    int tam=0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d",&tam);
    float conjunto[tam];
    
    for (int i=0;i<tam;i++){
        printf("Informe um valor: ");
        scanf("%f",&conjunto[i]);
    }
    media = calcularMedia(conjunto,tam);

    printf("A media é: %.2f",media);
    
    return 0;
}
