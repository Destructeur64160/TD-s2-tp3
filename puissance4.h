#ifndef __puissance4_H_
#define __puissance4_H_

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 25/02/2026 */
/* Résumé : alloue une matrice de taille N*N avec N une variable global */
/* Entrée : un entier qui est la taille de la matrice */
/* Sortie : une matrice de taille N*N */
int** allouer(int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 25/02/2026 */
/* Résumé : permet d'initialiser toute la grille a -1 */
/* Entrées : grille un tableau 2D d'entier dynamique et taille un entier */
void initialiser(int** grille, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 25/02/2026 */
/* Résumé : procédure qui permet d'afficher grille */
/* Entrées : grille un tableau 2D d'entier dynamique et taille un entier */
void afficher(int** grille, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 25/02/2026 */
/* Résumé : procédure qui vérifie la saisie du joueur,
 si la saisie est juste on place le pion sinon on lui redemande */
/* Entrées : grille un taleau 2D d'entier dynamique, taille un entier et joueur un entier*/
void jouer(int** grille, int taille, int joueur);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 26/02/2026 */
/* Résumé : fonction qui verifie si une ligne de 4 pions identiques a été entré dans la grille */
/* Entrées : grille matrice dynamique, joueur un entier, ligne(la ligne a vérifié) et taille un entier (la taille de la grille) */
/* Sortie : 1(True) ou 0(False) si la ligne et oui ou non verifié */
int VerificationLignes(int** grille, int ligne, int joueur, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 27/02/2026 */
/* Résumé : fonction qui verifie si une colonne de 4 pions identiques a été entré dans la grille */
/* Entrées : grille matrice dynamique, joueur un entier, colone(la colone a vérifié) et taille un entier (la taille de la grille) */
/* Sortie : 1(True) ou 0(False) si la colonne et oui ou non verifié */
int VerificationColonnes(int** grille, int colonne, int joueur, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 27/02/2026 */
/* Résumé : fonction qui verifie si dans les diagonale de haut gauche vers bas droit de 4 pion a été rentré dans la grille */
/* Entrées : grille matrice dynamique, joueur un entier et taille ( la taille de la grille ) */
/* Sortie : 1(True) ou 0(False) pour savoir si la diagonale est verifié */
int Verificationdiag1(int** grille, int joueur, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 27/02/2026 */
/* Résumé : fonction qui verifie si dans les diagonales de bas gauche vers haut droit de 4 pion a été rentré dans la grille */
/* Entrées : grille matrice dynamique, joueur un entier et taille ( la taille de la grile ) */
/* Sortie : 1(True) ou 0(False) pour savoir si la diagonale est vérifié */
int Verificationdiag2(int** grille, int joueur, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 27/02/2026 */
/* Résumé : fonction qui verifie si un joueur a gagné sur une des lignes, colonne ou diagonale */
/* Entrées : grille matrice dynamique, taille(la taille de la grille) */
/* Sortie : 1(True) ou 0(False) en fonction de si un joueur a gagné */
int aGagne(int** grille, int taille);

#endif
