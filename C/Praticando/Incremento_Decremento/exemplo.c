#include <stdio.h>

int main(){

    int dado = 10;

    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
  
    printf("dado++;  \nDepois do incremento:%d.\n", dado);

    dado--;

    printf("dado--;  \nDepois do decremento:%d.\n", dado);

    dado+=3;

    printf("dado+=3;  \nDepois do incremento em 3 unidades :%d.\n", dado);

    dado-=2;

    printf("dado-=2;  \nDepois do decremento em 2 unidades :%d.\n", dado);

    dado *=10;

     printf("dado *=10;  \nDepois de multiplicar por 10 :%d.\n", dado);

}