#include <stdio.h>

typedef struct{
    int peso;
    int altura;
} PesoAltura;

int main () {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 100;
    int n = 1;
    printf("Peso: %i, Altura: %i\n", pessoa.peso, pessoa.altura);

    return 0;

}