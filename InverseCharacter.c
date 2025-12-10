#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Entrez une chaîne : ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    printf("Chaîne inversée : ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
