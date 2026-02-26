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
void initialiser(int** grille, int taille){
	for (int i=0; i<taille; i++){
		for (int j=0; j<taille; j++){
			grille[i][j]=-1;
		}
	}
}

/* same as afficher in puissance4.h */
void afficher(int** grille, int taille){
	for (int i=0; i<taille; i++){
		for (int j=0; j<taille; j++){
			printf("|");
			if (grille[i][j]==-1){
				printf("	");
			}
			else if (grille[i][j]==1){
				printf("   X   ");
			}
			else {
				printf("   O   ");
			}
		}
		printf("|\n");
	}
}

/* same as jouer in puissance4.h */
void jouer(int** grille, int taille, int joueur){
	int col;
	int i=0;
	int placement=0; //condition valant 1(True) ou 0(False) pour savoir si on peu placer le pion
	int valide=0; //conditions pour verifier si le placement est valide;
	printf("Où voulez-vous placez votre pion?");
	scanf("%d", &col);
	while(valide==0){
		if (col>0 && col<taille-1 && grille[0][col]==-1){
			while(placement==0){
				if (grille[i][col] && i<taille-1){ // verifie si la case du dessous est libre et que l'on reste dans la matrice
					placement=0;
					i=i+1;
				}
				
				else if(grille[i][col]==-1 && i==(taille-1)){
					placement=1;
					grille[i][col]=joueur;
				}
				else{
					placement=1;
					grille[i][col]=joueur;
				}
			}
			valide=1;
			placement=0;
		}
		else{
			printf("Merci de bien vouloir saisir une colonne valide\n");
			afficher(grille,taille);
			scanf("%d",&col);
		}
	}
}

/* same as VerificationLignes in puissance4.h */
int VerificationLignes(int** grille, int ligne, int joueur, int taille){
	
}
