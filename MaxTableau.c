#include <stdio.h>

int main() {
    int n;
    printf("Taille du tableau : ");
    scanf("%d", &n);
    int t[n];
    printf("Entrez les éléments : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &t[i]);

    int max = t[0];
    for (int i = 1; i < n; i++)
        if (t[i] > max)
            max = t[i];

    printf("Le maximum est : %d\n", max);
    return 0;
}
