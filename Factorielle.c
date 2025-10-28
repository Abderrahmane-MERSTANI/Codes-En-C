#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Entrez un nombre entier positif : ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Erreur : veuillez entrer un entier positif.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
        if (fact < 0) {
            printf("Erreur : dépassement de capacité (n trop grand).\n");
            return 1;
        }
    }

    printf("Factorielle de %d = %lld\n", n, fact);
    return 0;
}
