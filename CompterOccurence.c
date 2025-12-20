#include <stdio.h>

/*
====================================================
Titre : CompterOccurence.c

Petite description :
Programme qui compte le nombre d'occurrences
d'un element dans un tableau d'entiers.

Grande description :
Le programme parcourt l'ensemble du tableau
et compare chaque valeur avec le nombre saisi
par l'utilisateur afin de determiner combien
de fois il apparait. Cet algorithme permet de
pratiquer la recherche lineaire et les boucles.

Resume :
- Lecture de la taille du tableau
- Saisie des elements
- Lecture de la valeur a rechercher
- Comptage et affichage du resultat
====================================================
*/

int main() {
    int n, i, x, compteur = 0;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    int t[n];

    // Saisie du tableau
    for (i = 0; i < n; i++) {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }

    // Valeur a rechercher
    printf("Donner la valeur a rechercher : ");
    scanf("%d", &x);

    // Comptage des occurrences
    for (i = 0; i < n; i++) {
        if (t[i] == x) {
            compteur++;
        }
    }

    // Affichage du resultat
    printf("Le nombre %d apparait %d fois dans le tableau.\n", x, compteur);

    return 0;
}
