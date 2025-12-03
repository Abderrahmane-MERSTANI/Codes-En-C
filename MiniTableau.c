#include <stdio.h>

int main() {
    int n, i, min;
    printf("Taille tableau : ");
    scanf("%d", &n);

    int tab[n];
    for(i = 0; i < n; i++) scanf("%d", &tab[i]);

    min = tab[0];
    for(i = 1; i < n; i++)
        if(tab[i] < min) min = tab[i];

    printf("Minimum = %d\n", min);
    return 0;
}
