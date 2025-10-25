#include <stdio.h>
#include <math.h>

int main() {
    int n, i, estPremier = 1;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n <= 1) estPremier = 0;
    else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                estPremier = 0;
                break;
            }
        }
    }

    if (estPremier)
        printf("%d est un nombre premier\n", n);
    else
        printf("%d n'est pas premier\n", n);
    return 0;
}
