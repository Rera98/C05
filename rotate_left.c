#include <stdio.h>

int main() {
    int n, i;

    // Lecture de la taille du tableau

    scanf("%d", &n);

    // Déclaration du tableau
    int tableau[n];

    // Lecture des éléments du tableau

    for( i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Sauvegarde du premier élément
    int premier = tableau[0];

    // Décalage des éléments vers la gauche
    for( i = 0; i < n - 1; i++) {
        tableau[i] = tableau[i + 1];
    }

    // Placement du premier élément à la fin
    tableau[n - 1] = premier;

    // Affichage du tableau après rotation
    printf("Tableau après rotation : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}