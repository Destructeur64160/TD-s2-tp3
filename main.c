#include <stdio.h>
#include <stdlib.h>
#include "puissance4.h"

int N;

int main() {
    printf("C'est le puissance 4 ! \n");
    N=7;
    printf("valeur de N: %d\n", N);
    int** grille;
    grille = allouer(N);
    initialiser(grille, N);
    afficher(grille,N);
    return 0;
}
