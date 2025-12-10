#include <stdio.h>

int main() {
    int n, i, x, found = 0;

    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrer les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Entrer le nombre a rechercher : ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(tab[i] == x) {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("Nombre trouve a la position : %d\n", i);
    } else {
        printf("Nombre non trouve dans le tableau.\n");
    }

    return 0;
}
