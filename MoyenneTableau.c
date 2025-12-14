#include <stdio.h>

int main() {
    int n, i;
    float somme = 0, moyenne;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int t[n];

    for (i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &t[i]);
        somme += t[i];
    }

    moyenne = somme / n;

    printf("La moyenne des elements est : %.2f\n", moyenne);

    return 0;
}
