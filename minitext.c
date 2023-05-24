#include <stdio.h>

int main() {
    // Déclaration des variables
    int choix;
    int age = 0;
    int points = 0;
    char nom[20];
    float taille;
    char couleurYeux[10];
    int tresorTrouve = 0;
    
    // Affichage des données à l'écran
    printf("Bienvenue dans le jeu de la personnalité !\n");
    printf("Veuillez répondre aux questions suivantes pour créer votre personnage.\n\n");

    printf("Quel est votre nom ? ");
    scanf("%s", nom);

    printf("Quel est votre âge ? ");
    scanf("%d", &age);

    printf("Quelle est votre taille en mètres ? ");
    scanf("%f", &taille);

    printf("Quelle est la couleur de vos yeux ? ");
    scanf("%s", couleurYeux);

    // Demande des informations au joueur
    printf("\n%s, vous vous trouvez dans une forêt mystérieuse.\n", nom);
    printf("Vous voyez deux chemins devant vous. Lequel choisissez-vous ?\n");
    printf("1. Chemin de gauche\n");
    printf("2. Chemin de droite\n");
    scanf("%d", &choix);

    // Utilisation de conditions pour modifier l'état du jeu
    if (choix == 1) {
        printf("\nVous avez choisi le chemin de gauche.\n");
        points += 10;
    } else if (choix == 2) {
        printf("\nVous avez choisi le chemin de droite.\n");
        points += 5;
    }

    // Utilisation de boucles pour chercher des trésors
    for (int i = 0; i < 3; i++) {
        printf("\nVous cherchez un trésor...\n");
        printf("...vous creusez un trou...\n");
    }
    
    // Utilisation d'un tableau pour stocker des listes
    char objetsTrouves[5][20] = {"Épée", "Potion", "Boussole", "Lanterne", "Carte"};
    printf("\nFélicitations ! Vous avez trouvé un trésor ! Voici les objets que vous avez obtenus :\n");
    for (int i = 0; i < 5; i++) {
        printf("- %s\n", objetsTrouves[i]);
    }
    tresorTrouve = 1;

    // Affichage des informations finales du joueur
    printf("\n%s, votre personnalité dans le jeu :\n", nom);
    printf("- Âge : %d ans\n", age);
    printf("- Taille : %.2f mètres\n", taille);
    printf("- Couleur des yeux : %s\n", couleurYeux);
    printf("- Points : %d\n", points);

    if (tresorTrouve) {
        printf("- Trésor trouvé : Oui\n");
    } else {
        printf("- Trésor trouvé : Non\n");
    }

    return 0;
}
