#include <stdio.h>

int main() {
    int n, somme = 0;

    printf("Entrer un nombre : ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n; // gérer les nombres négatifs
    }

    while (n != 0) {
        somme += n % 10;
        n = n / 10;
    }

    printf("La somme des chiffres est : %d", somme);

    return 0;
}
