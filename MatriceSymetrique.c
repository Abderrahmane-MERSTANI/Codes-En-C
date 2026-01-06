#include <stdio.h>


int main() {
    int n, i, j, symetrique = 1;

    printf("Donner la taille de la matrice : ");
    scanf("%d", &n);

    int mat[n][n];

    // Saisie de la matrice
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Verification de la symetrie
    for (i = 0; i < n && symetrique; i++) {
        for (j = i + 1; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symetrique = 0;
                break;
            }
        }
    }

    // Affichage du resultat
    if (symetrique) {
        printf("La matrice est symetrique.\n");
    } else {
        printf("La matrice n'est pas symetrique.\n");
    }

    return 0;
}
