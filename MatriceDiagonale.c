#include <stdio.h>

int main() {
    int n;
    int mat[10][10];
    int estDiagonale = 1;

    printf("Entrer la taille de la matrice : ");
    scanf("%d", &n);

    printf("Entrer les elements de la matrice :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && mat[i][j] != 0) {
                estDiagonale = 0;
                break;
            }
        }
        if (!estDiagonale) {
            break;
        }
    }

    if (estDiagonale) {
        printf("La matrice est diagonale.\n");
    } else {
        printf("La matrice n'est pas diagonale.\n");
    }

    return 0;
}
