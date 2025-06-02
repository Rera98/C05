#include <stdio.h>

// Fonction pour vérifier si un élément est déjà présent dans un tableau
int existe_deja(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return 1; // existe déjà
        }
    }
    return 0;
}

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int t1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    // Lecture de la taille du deuxième tableau
    scanf("%d", &n2);
    int t2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }

    // Tableau pour stocker l'intersection sans doublons
    int intersection[n1 < n2 ? n1 : n2];
    int k = 0; // taille actuelle de l'intersection

    // Recherche des éléments communs
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                // Vérifie si l'élément commun a déjà été ajouté
                if (!existe_deja(intersection, k, t1[i])) {
                    intersection[k++] = t1[i];
                }
                break;
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");

    return 0;
}

