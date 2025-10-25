#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Entrez une chaîne : ");
    gets(str);

    int len = strlen(str);
    printf("Chaîne inversée : ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
