#include <stdio.h>

int main() {
    int n, i, j, min, temp;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrer les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Tri par sélection
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }

    printf("Tableau trie :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
