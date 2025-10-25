#include <stdio.h>

int main() {
    int n;
    printf("Taille du tableau : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les éléments : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }

    printf("Tableau trié : ");
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    return 0;
}
