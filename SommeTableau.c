#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Taille tableau : ");
    scanf("%d", &n);

    int tab[n];
    for(i = 0; i < n; i++) scanf("%d", &tab[i]);

    for(i = 0; i < n; i++) sum += tab[i];

    printf("Somme = %d\n", sum);
    return 0;
}
