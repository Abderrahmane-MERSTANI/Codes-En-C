#include <stdio.h>

int main() {
    int n, i, j, cle;
    int tab[100];

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    // Tri par insertion
    for (i = 1; i < n; i++) {
        cle = tab[i];
        j = i - 1;

        while (j >= 0 && tab[j] > cle) {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = cle;
    }

    printf("Tableau trie : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>