#include <stdio.h>

int main()
{

int vetor[10], i;

    for (i=0; i<10; i++)
    {

        printf("Digite o valor: ");

        scanf("%d",&vetor[i]);
    }

    for(i=0;i<10;i++){
        printf("\n%d",vetor[i]);
    }

}