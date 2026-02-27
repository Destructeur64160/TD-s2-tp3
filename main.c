#include <stdio.h>
#include <stdlib.h>
#include "puissance4.h"

int N;

int main() {
    int** grille;
    int joueur=1;
    printf("C'est le puissance 4 ! \n");
    N=7;
    printf("valeur de N: %d\n", N);
    grille = allouer(N);
    initialiser(grille, N);
    afficher(grille,N);
    while(Verificationdiag1(grille, joueur, N)==0 && Verificationdiag2(grille, joueur, N)==0){
        jouer(grille, N, joueur);
        afficher(grille,N);
    }
    return 0;
}
