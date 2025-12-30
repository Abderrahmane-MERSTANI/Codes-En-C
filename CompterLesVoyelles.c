#include <stdio.h>
#include <ctype.h>

// Fonction qui vérifie si un caractère est une voyelle
int estVoyelle(char c) {
    c = tolower(c); // Convertir en minuscule pour simplifier
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    char texte[200];
    int compteur = 0;

    printf("Entrez un texte : ");
    fgets(texte, sizeof(texte), stdin);

    // Parcours de la chaîne
    for(int i = 0; texte[i] != '\0'; i++) {
        if(estVoyelle(texte[i])) {
            compteur++;
        }
    }

    printf("Nombre de voyelles : %d\n", compteur);

    return 0;
}
