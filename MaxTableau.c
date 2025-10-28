#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Taille du tableau : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erreur : taille invalide.\n");
        return 1;
    }

    int *t = malloc(n * sizeof(int));
    if (!t) {
        printf("Erreur : mémoire insuffisante.\n");
        return 1;
    }

    printf("Entrez les éléments : ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &t[i]) != 1) {
            printf("Erreur de saisie.\n");
            free(t);
            return 1;
        }
    }

    int max = t[0];
    for (int i = 1; i < n; i++)
        if (t[i] > max)
            max = t[i];

    printf("Le maximum est : %d\n", max);
    free(t);
    return 0;
}
