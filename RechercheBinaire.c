#include <stdio.h>

int rechercheBinaire(int tab[], int taille, int valeur) {
    int debut = 0, fin = taille - 1, milieu;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tab[milieu] == valeur)
            return milieu;
        else if (tab[milieu] < valeur)
            debut = milieu + 1;
        else
            fin = milieu - 1;
    }

    return -1; // valeur non trouvée
}

int main() {
    int tab[] = {2, 4, 6, 8, 10, 12, 14};
    int taille = 7;
    int valeur;

    printf("Entrez un nombre a chercher: ");
    scanf("%d", &valeur);

    int pos = rechercheBinaire(tab, taille, valeur);

    if (pos != -1)
        printf("Nombre trouve a la position: %d\n", pos);
    else
        printf("Nombre non trouve.\n");

    return 0;
}
