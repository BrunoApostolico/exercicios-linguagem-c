/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matriz[4][2],linha,coluna;
    
    //percorrer a matriz e preenche
    for (linha=1; linha <=4; linha++){
        for (coluna=1; coluna <=2; coluna++){
            printf("Informe o valor da linha %d na coluna %d :",linha,coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }
    printf("\n Veja sua Matriz \n");
        //percorre a matriz para exibir os valores armazenados
    for(linha=1; linha<=4;linha++){
        for (coluna=1; coluna<=2;coluna++){
            printf("%d\t",matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
