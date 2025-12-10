#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, next;

    printf("Combien de termes ? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erreur : entrez un entier positif.\n");
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        printf("%lld ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    printf("\n");
    return 0;
}

