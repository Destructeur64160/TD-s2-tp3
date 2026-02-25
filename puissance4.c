#include <stdio.h>
#include <stdlib.h>
#include "puissance4.h"

/* same as allouer in puissance4.h */
int** allouer(int taille){
	int** grille;
	grille=malloc(taille*sizeof(int*));
	for (int i=0; i<taille; i++){
		grille[i]=malloc(taille*sizeof(int));
	}
	return grille;
}

/* same as initialiser in puissance4.h*/
void initialiser(int** maGrille, int taille){
	for (int i=0; i<taille; i++){
		for (int j=0; j<taille; j++){
			maGrille[i][j]=-1;
		}
	}
}

/* same as afficher in puissance4.h */
void afficher(int** maGrille, int taille){
	for (int i=0; i<taille; i++){
		for (int j=0; j<taille; j++){
			printf("|");
			if (maGrille[i][j]==-1){
				printf("	");
			}
			else if (maGrille[i][j]==1){
				printf(" X ");
			}
			else {
				printf(" O ");
			}
		}
		printf("|\n");
	}
}

/* same as jouer in puissance4.h */
void jouer(int** maGrille, int taille, int joueur){
	
}
