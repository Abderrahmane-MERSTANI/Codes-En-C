#include <stdio.h>


int main() {
    int i, j, lignes, colonnes;

    printf("Donner le nombre de lignes : ");
    scanf("%d", &lignes);

    printf("Donner le nombre de colonnes : ");
    scanf("%d", &colonnes);

    int mat[lignes][colonnes];
    int transpose[colonnes][lignes];

    // Saisie de la matrice
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Calcul de la transposée
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    // Affichage de la matrice transposée
    printf("Matrice transposee :\n");
    for (i = 0; i < colonnes; i++) {
        for (j = 0; j < lignes; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
