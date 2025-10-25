#include <stdio.h>

int main() {
    int n;
    printf("Combien d'étudiants ? ");
    scanf("%d", &n);
    float notes[n], somme = 0, moyenne;

    for (int i = 0; i < n; i++) {
        printf("Note %d : ", i + 1);
        scanf("%f", &notes[i]);
        somme += notes[i];
    }

    moyenne = somme / n;
    printf("Moyenne = %.2f\nNotes supérieures à la moyenne : ", moyenne);
    for (int i = 0; i < n; i++)
        if (notes[i] > moyenne)
            printf("%.2f ", notes[i]);
    return 0;
}
