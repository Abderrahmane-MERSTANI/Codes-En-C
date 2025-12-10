#include <stdio.h>

int main() {
    int n, original, reversed = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Non palindrome\n");

    return 0;
}
