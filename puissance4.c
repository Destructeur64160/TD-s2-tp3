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
				printf(" ");
			}
			else if (grille[i][j]==1){
				printf("X");
			}
			else {
				printf("O");
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
		if (col>=0 && col<taille && grille[0][col]==-1){
			while(placement==0){
				if (grille[i][col]==-1 && i<taille-1){ // verifie si la case du dessous est libre et que l'on reste dans la matrice
					placement=0;
					i=i+1;
				}
				else if(grille[i][col]==-1 && i==(taille-1)){
					placement=1;
					grille[i][col]=joueur;
				}
				else if(grille[i][col]!=-1 && i>0){
					placement=1;
					grille[i-1][col]=joueur;
				}
			}
			valide=1;
			placement=0;
			i=0;
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
	for (int i=0; i<taille-3; i++){

		if(grille[ligne][i] == grille[ligne][i+1] && grille[ligne][i+1] == grille[ligne][i+2] && grille[ligne][i+2] == grille[ligne][i+3] && grille[ligne][i]!=-1){
			return 1;
		}
	}
	return 0;
}

/* same as VerificationColonnes in puissance4.h */
int VerificationColonnes(int** grille, int colonne, int joueur, int taille){
	for (int i=0; i<taille-3; i++){
		if(grille[i][colonne] == grille[i+1][colonne] && grille[i+1][colonne] == grille[i+2][colonne] && grille[i+2][colonne] == grille[i+3][colonne] && grille[i][colonne]!=-1){
			return 1;
		}
	}
	return 0;
}

/* same as Verificationdiag1 in puissance4.h */
int Verificationdiag1(int** grille, int joueur, int taille){
	for (int i=0; i < taille-3; i++){
		for (int j=0; j < taille-3;j++){
			if(grille[i][j] == grille[i+1][j+1] && grille[i+1][j+1] == grille[i+2][j+2] && grille[i+2][j+2] == grille[i+3][j+3] && grille[i][j]!=-1){
				return 1;
			}
		}
	}
	return 0;
}

/* same as Verificationdiag2 in puissance4.h*/
int Verificationdiag2(int** grille, int joueur, int taille){
	for (int i=0; i<taille-3; i++){
		for (int j=0; j < taille-3;j++){
			if(grille[i+3][j] == grille[i+2][j+1] && grille[i+2][j+1] == grille[i+1][j+2] && grille[i+1][j+2] == grille[i][j+3] && grille[i+3][j]!=-1){
				return 1;
			}
		}
	}
	return 0;
}

/* same as aGagne in puissance4.h */
int aGagne(int** grille, int taille){
	for (int i=1; i<=2; i++){
		for (int j=0; j<taille; j++)
	}
}
