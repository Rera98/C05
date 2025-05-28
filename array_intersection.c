#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau

    scanf("%d", &n1);
    int tab1[n1];
   
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lecture de la taille du deuxième tableau
  
    scanf("%d", &n2);
    int tab2[n2];
   
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Tableau pour stocker l'intersection sans doublons
    int inter[n1 < n2 ? n1 : n2]; // Taille max possible = taille du plus petit tableau
    int k = 0; // Compteur pour les éléments de l'intersection

    // Recherche des éléments communs
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifier que l'élément n'a pas déjà été ajouté
                bool deja_present = false;
                for (int l = 0; l < k; l++) {
                    if (inter[l] == tab1[i]) {
                        deja_present = true;
                        break;
                    }
                }
                if (!deja_present) {
                    inter[k++] = tab1[i];
                }
                break; // inutile de continuer à chercher une fois trouvé
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for (int i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }
    printf("\n");

    return 0;
}
