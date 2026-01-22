#include <stdio.h>


int main() {
    int lignes, colonnes, i, j;

    printf("Donner le nombre de lignes : ");
    scanf("%d", &lignes);

    printf("Donner le nombre de colonnes : ");
    scanf("%d", &colonnes);

    int mat1[lignes][colonnes];
    int mat2[lignes][colonnes];
    int somme[lignes][colonnes];

    // Saisie de la premiere matrice
    printf("Saisie de la premiere matrice :\n");
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Saisie de la deuxieme matrice
    printf("Saisie de la deuxieme matrice :\n");
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Addition des matrices
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            somme[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Affichage de la matrice somme
    printf("Matrice somme :\n");
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            printf("%d ", somme[i][j]);
        }
        printf("\n");
    }

    return 0;
}
