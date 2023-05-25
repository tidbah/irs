#include <stdio.h>

int main() {
    int choice;
    int total = 0;

    printf("Quel pied utilisez-vous principalement? \n");
    printf("1. Gauche \n");
    printf("2. Droit \n");
    scanf("%d", &choice);
    if (choice == 1) {
        total += 1;
    }

    printf("Quelle est la nationalité que vous préférez ? \n");
    printf("1. Portugais \n");
    printf("2. Argentin \n");
    printf("3. Brésilien \n");
    printf("4. Croate \n");
    scanf("%d", &choice);
    if (choice == 2) {
        total += 1;
    }

    printf("Quel est votre championnat de football préféré? \n");
    printf("1. Premier League \n");
    printf("2. La Liga \n");
    printf("3. Ligue 1 \n");
    printf("4. Serie A \n");
    scanf("%d", &choice);
    if (choice == 2) {
        total += 1;
    }

    printf("Quelle est votre plus grande capacité? \n");
    printf("1. Dribbler \n");
    printf("2. Passer \n");
    printf("3. Marquer \n");
    printf("4. Contrôler le jeu \n");
    scanf("%d", &choice);
    if (choice == 3) {
        total += 1;
    }

    if (total == 4) {
        printf("Vous avez un profil similaire à celui de Lionel Messi.\n");
    } else if (total == 3) {
        printf("Vous avez un profil similaire à celui de Neymar.\n");
    } else if (total == 2) {
        printf("Vous avez un profil similaire à celui de Cristiano Ronaldo.\n");
    } else {
        printf("Vous avez un profil similaire à celui de Luka Modric.\n");
    }

    return 0;
}
