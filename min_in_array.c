#include <stdio.h>

int main() {
    int n, i, min;

    // Lecture de la taille du tableau
   
    scanf("%d", &n);

    // Déclaration du tableau
    int tableau[n];

    // Lecture des éléments du tableau
  
    for ( i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation du minimum avec le premier élément
     min = tableau[0];

    // Balayage du tableau pour trouver le plus petit élément
    for ( i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le minimum est : %d\n", min);

    return 0;
}
