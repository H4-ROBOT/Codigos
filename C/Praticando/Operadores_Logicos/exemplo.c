
/*
Operadores Lógicos: 

* Conjunção ( "e" lógico ) : &&
É quando tudo for verdade

*Disjunção (" ou " Lógico):  | |
É verdade se ao menos 1 for verdade.

Inversão (Negação - "não lógico") :  !
É verdade quando o operador é falso

*/

// irei escrever um programa que simula os 3 exemplos acima, nota final de 3 alunos.
#include <stdio.h>
#define texto "Nota de avaliação dos alunos".

int main () {

float nota;

/*printf("Insira uma nota:\n");

scanf("%f",&nota);

if (nota>=7.0)
{
    printf("Voce esta aprovado!");
}
*/

// --------   &&  ---------------
/*printf("Insira uma nota:\n");

scanf("%f",&nota);

if (nota>=7.0 && nota < 10.0)
{
    printf("Voce esta aprovado!");
}
*/

// --------   ||  ---------------
/*printf("Insira uma nota:\n");

scanf("%f",&nota);

if (nota>=7.0 || nota <= 10.0 )
{
    printf("Voce esta aprovado!");
}
*/

// --------   !  ---------------
/*printf("Insira uma nota:\n");

scanf("%f",&nota);

if (!(nota>=7.0))
{
    printf("Voce esta aprovado!");
}
*/
}