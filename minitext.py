def main():
    # Déclaration des variables
    choix = 0
    age = 0
    points = 0
    nom = ""
    taille = 0.0
    couleur_yeux = ""
    tresor_trouve = False
    
    # Affichage des données à l'écran
    print("Bienvenue dans le jeu de la personnalité !")
    print("Veuillez répondre aux questions suivantes pour créer votre personnage.\n")

    nom = input("Quel est votre nom ? ")
    age = int(input("Quel est votre âge ? "))
    taille = float(input("Quelle est votre taille en mètres ? "))
    couleur_yeux = input("Quelle est la couleur de vos yeux ? ")

    # Demande des informations au joueur
    print("\n{}, vous vous trouvez dans une forêt mystérieuse.".format(nom))
    print("Vous voyez deux chemins devant vous. Lequel choisissez-vous ?")
    print("1. Chemin de gauche")
    print("2. Chemin de droite")
    choix = int(input())

    # Utilisation de conditions pour modifier l'état du jeu
    if choix == 1:
        print("\nVous avez choisi le chemin de gauche.")
        points += 10
    elif choix == 2:
        print("\nVous avez choisi le chemin de droite.")
        points += 5

    # Utilisation de boucles pour chercher des trésors
    for i in range(3):
        print("\nVous cherchez un trésor...")
        print("...vous creusez un trou...")

    # Utilisation d'une liste pour stocker des objets trouvés
    objets_trouves = ["Épée", "Potion", "Boussole", "Lanterne", "Carte"]
    print("\nFélicitations ! Vous avez trouvé un trésor ! Voici les objets que vous avez obtenus :")
    for objet in objets_trouves:
        print("-", objet)
    tresor_trouve = True

    # Affichage des informations finales du joueur
    print("\n{}, votre personnalité dans le jeu :".format(nom))
    print("- Âge : {} ans".format(age))
    print("- Taille : {} mètres".format(taille))
    print("- Couleur des yeux : {}".format(couleur_yeux))
    print("- Points : {}".format(points))

    if tresor_trouve:
        print("- Trésor trouvé : Oui")
    else:
        print("- Trésor trouvé : Non")


if __name__ == "__main__":
    main()
