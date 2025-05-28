#include <stdio.h>

int main() {
    int n, i;

    // Lecture de la taille du tableau
    
    scanf("%d", &n);

    // Déclaration du tableau
    int tab[n];

    // Lecture des éléments du tableau
  
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Lecture de l'élément à rechercher
    int val;
    
    scanf("%d", &val);

    // Initialisation du compteur
    int compteur = 0;

    // Parcours du tableau pour compter les occurrences
    for ( i = 0; i < n; i++) {
        if (tab[i] == val) {
            compteur++;
        }
    }

    // Affichage du résultat
    printf("L'élément %d apparaît %d fois.\n", val, compteur);

    return 0;
}
