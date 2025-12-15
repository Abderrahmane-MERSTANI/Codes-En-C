#include <stdio.h>


int main() {
int n, somme = 0;


printf("Entrez un nombre positif : ");
scanf("%d", &n);


for (int i = 1; i <= n / 2; i++) {
if (n % i == 0) {
somme += i;
}
}


if (somme == n && n > 0) {
printf("%d est un nombre parfait.
", n);
} else {
printf("%d n'est pas un nombre parfait.
", n);
}


return 0;
}
