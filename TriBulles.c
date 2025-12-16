#include <stdio.h>

/*
====================================================
Titre : TriBulles.c

Petite description :
Programme qui trie un tableau d'entiers en utilisant
l'algorithme du tri à bulles.

Grande description :
Le tri à bulles compare les éléments adjacents du tableau
et les échange lorsqu'ils sont dans le mauvais ordre.
Ce procédé est répété jusqu'à ce que le tableau soit
entièrement trié. Cet algorithme est simple mais peu
performant pour les grands tableaux.

Résumé :
- Lecture de la taille du tableau
- Saisie des valeurs
- Tri du tableau par la méthode des bulles
- Affichage du tableau trié
====================================================
*/

int main() {
    int n, i, j, temp;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    int t[n];

    // Saisie du tableau
    for (i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (t[j] > t[j + 1]) {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trie : ");
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    return 0;
}
