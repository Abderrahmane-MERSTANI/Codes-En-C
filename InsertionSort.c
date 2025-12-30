#include <stdio.h>


int main() {
int n;
printf("Entrez la taille du tableau : ");
scanf("%d", &n);


int t[n];
for (int i = 0; i < n; i++) {
printf("t[%d] = ", i);
scanf("%d", &t[i]);
}


// Tri par insertion
for (int i = 1; i < n; i++) {
int cle = t[i];
int j = i - 1;
while (j >= 0 && t[j] > cle) {
t[j + 1] = t[j];
j--;
}
t[j + 1] = cle;
}


printf("Tableau trié : ");
for (int i = 0; i < n; i++) {
printf("%d ", t[i]);
}


return 0;
}