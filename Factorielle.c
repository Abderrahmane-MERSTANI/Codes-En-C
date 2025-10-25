#include <stdio.h>

int main() {
    int n, i;
    long fact = 1;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("Factorielle de %d = %ld\n", n, fact);
    return 0;
}
