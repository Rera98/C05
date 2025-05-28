#include <stdio.h>

int main() {
    int n, m;

    // Lecture de la taille du premier tableau
    scanf("%d", &n);

    // Déclaration et lecture du premier tableau
    int tab1[n];
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lecture de la taille du deuxième tableau
   
    scanf("%d", &m);

    // Déclaration et lecture du deuxième tableau
    int tab2[m];
   
    for(int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    // Déclaration du tableau fusionné
    int fusion[n + m];

    // Copie du premier tableau dans fusion
    for(int i = 0; i < n; i++) {
        fusion[i] = tab1[i];
    }

    // Copie du deuxième tableau à la suite
    for(int i = 0; i < m; i++) {
        fusion[n + i] = tab2[i];
    }

    // Affichage du tableau fusionné
    printf("Tableau fusionné : ");
    for(int i = 0; i < n + m; i++) {
        printf("%d ", fusion[i]);
    }
    printf("\n");

    return 0;
}
