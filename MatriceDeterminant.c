#include <stdio.h>

int main() {
    int n;
    float mat[3][3], det;

    printf("Entrer la taille de la matrice (2 ou 3) : ");
    scanf("%d", &n);

    if (n != 2 && n != 3) {
        printf("Taille non supportee.\n");
        return 0;
    }

    printf("Entrer les elements de la matrice :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &mat[i][j]);
        }
    }

    if (n == 2) {
        det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    } else {
        det =
            mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
            mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
            mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    }

    printf("Le determinant de la matrice est : %.2f\n", det);

    return 0;
}
