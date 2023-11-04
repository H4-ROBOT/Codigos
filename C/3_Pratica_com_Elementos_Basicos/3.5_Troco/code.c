/*
Máquina de café, diz que ele so pode colocar notas multiplas de 5.
Se ele colocar notas diferentes do multiplo de 5, 
quanto de dinheiro ele irá perder.
sendo que o café vale 10 reais.
*/
#include<stdio.h>

int main()
{
    int dinheiro, troco;
    scanf("%d", &dinheiro);

    //calcula o quanto o cliente perdera de troco
    troco = dinheiro % 10;
    printf("%d\n", troco);
    return 0;
}