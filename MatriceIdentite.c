#include <stdio.h>



int main() {
    int n, i, j;

    printf("Donner la taille de la matrice : ");
    scanf("%d", &n);

    int mat[n][n];

    // Generation de la matrice identite
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }

    // Affichage de la matrice
    printf("Matrice identite :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
