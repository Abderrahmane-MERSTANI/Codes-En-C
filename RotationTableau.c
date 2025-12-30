#include <stdio.h>

/*
====================================================
Titre : RotationTableau.c

Petite description :
Programme qui effectue une rotation a gauche
des elements d'un tableau d'entiers.

Grande description :
La rotation a gauche consiste a deplacer le
premier element du tableau a la derniere
position tout en decalant les autres elements
vers la gauche. Ce type d'algorithme est tres
utilise pour la manipulation des tableaux.

Resume :
- Lecture de la taille du tableau
- Saisie des elements
- Rotation a gauche du tableau
- Affichage du resultat
====================================================
*/

int main() {
    int n, i, premier;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    int t[n];

    // Saisie du tableau
    for (i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }

    // Rotation a gauche
    premier = t[0];
    for (i = 0; i < n - 1; i++) {
        t[i] = t[i + 1];
    }
    t[n - 1] = premier;

    // Affichage du tableau apres rotation
    printf("Tableau apres rotation : ");
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    return 0;
}
