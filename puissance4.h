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
/* Entrées : magrille un tableau 2D d'entier dynamique et taille un entier */
void initialiser(int** maGrille, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 25/02/2026 */
/* Résumé : procédure qui permet d'afficher magrille */
/* Entrées : magrille un tableau 2D d'entier dynamique et taille un entier */
void afficher(int** maGrille, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 25/02/2026 */
/* Résumé : procédure qui vérifie la saisie du joueur,
 si la saisie est juste on place le pion sinon on lui redemande*/
/* Entrées : maGrille un taleau 2D d'entier dynamique, taille un entier et joueur un entier*/
void jouer(int** maGrille, int taille, int joueur);


#endif
