// Menu de dias da semana

#include <stdio.h>

int main (){

    int numero;

    printf("Aprendendo sobre os dias da semana.\nSelecione um dia de '1 a 7' \n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;
    
    default:
    printf("Error");
        break;
    }
}