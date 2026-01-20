#include <stdio.h>


int main() {
    int lignes, colonnes, i, j;

    printf("Donner le nombre de lignes : ");
    scanf("%d", &lignes);

    printf("Donner le nombre de colonnes : ");
    scanf("%d", &colonnes);

    int mat[lignes][colonnes];

    // Saisie de la matrice
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int max = mat[0][0];
    int min = mat[0][0];

    // Recherche du max et du min
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            if (mat[i][j] > max)
                max = mat[i][j];
            if (mat[i][j] < min)
                min = mat[i][j];
        }
    }

    // Affichage
    printf("Valeur maximale : %d\n", max);
    printf("Valeur minimale : %d\n", min);

    return 0;
}
