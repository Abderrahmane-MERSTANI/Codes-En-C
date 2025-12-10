#include <stdio.h>

int main() {
    int n, i, result = 0;
    printf("Taille des vecteurs : ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Elements du vecteur A :\n");
    for (i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("Elements du vecteur B :\n");
    for (i = 0; i < n; i++) scanf("%d", &B[i]);

    for (i = 0; i < n; i++) result += A[i] * B[i];

    printf("Produit scalaire = %d\n", result);
    return 0;
}
