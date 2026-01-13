#include <stdio.h>

// Fonction pour fusionner deux sous-tableaux
void fusion(int t[], int debut, int milieu, int fin) {
    int i = debut;
    int j = milieu + 1;
    int k = 0;
    int temp[100];

    while (i <= milieu && j <= fin) {
        if (t[i] <= t[j]) {
            temp[k++] = t[i++];
        } else {
            temp[k++] = t[j++];
        }
    }

    while (i <= milieu) {
        temp[k++] = t[i++];
    }

    while (j <= fin) {
        temp[k++] = t[j++];
    }

    for (i = debut, k = 0; i <= fin; i++, k++) {
        t[i] = temp[k];
    }
}

// Fonction récursive de tri fusion
void triFusion(int t[], int debut, int fin) {
    if (debut < fin) {
        int milieu = (debut + fin) / 2;
        triFusion(t, debut, milieu);
        triFusion(t, milieu + 1, fin);
        fusion(t, debut, milieu, fin);
    }
}

int main() {
    int t[100], n, i;

    printf("Entrer le nombre d'elements : ");
    scanf("%d", &n);

    printf("Entrer les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    triFusion(t, 0, n - 1);

    printf("Tableau trie :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    return 0;
}
