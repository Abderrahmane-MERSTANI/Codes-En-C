#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float somme = 0, moyenne;


    printf("Combien d'étudiants ? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erreur : veuillez entrer un nombre d'étudiants valide.\n");
        return 1;
    }

    float *notes = malloc(n * sizeof(float));
    if (notes == NULL) {
        printf("Erreur : mémoire insuffisante.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Note %d : ", i + 1);
        if (scanf("%f", &notes[i]) != 1 || notes[i] < 0 || notes[i] > 20) {
            printf("Erreur : note invalide. Entrez une note entre 0 et 20.\n");
            free(notes);
            return 1;
        }
        somme += notes[i];
    }

    moyenne = somme / n;
    printf("\nMoyenne générale : %.2f\n", moyenne);

    printf("Notes supérieures à la moyenne : ");
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (notes[i] > moyenne) {
            printf("%.2f ", notes[i]);
            count++;
        }
    }
    if (count == 0)
        printf("Aucune note au-dessus de la moyenne.");

    printf("\n");

    free(notes);
    return 0;
}

