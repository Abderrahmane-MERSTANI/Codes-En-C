#include <stdio.h>

int main() {
    int a, b, r;

    printf("Entrer deux nombres : ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Le PGCD est : %d", a);

    return 0;
}
