/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float calcularIMC(float peso,float altura){
    float IMC = peso/(altura*altura);
    return IMC;
}


int main()
{
    float peso, altura,IMC;
    
    printf("Informe seu peso em Kg: ");
    scanf("%f",&peso);
    printf("\nInforme sua altura em Metros: ");
    scanf("%f",&altura);
    
    IMC = calcularIMC(peso,altura);
    
    if (IMC < 18.5) {
        printf ("\nSeu IMC é: %.2f. Vc está abaixo do peso.",IMC);
    }else if (IMC < 24.9) {
        printf ("\nSeu IMC é: %.2f. Vc está no peso ideal.",IMC);
    }else{
        printf("\nSeu IMC é: %.2f. Vc está com sobrepeso.",IMC);
    }
    

    return 0;
}
