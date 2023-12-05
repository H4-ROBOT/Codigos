#include <stdio.h>

int main() {

    float distancia, consumo_total, consumo_medio;
    printf("Digite a Distancia de km / Consumo Total de gasolina: ");
    scanf("%f%f",&distancia, &consumo_total);
    consumo_medio = distancia / consumo_total;
    printf ("Consume: %3.f km/l\n", consumo_medio);
    return 0;

}