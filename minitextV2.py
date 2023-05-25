def main():
    total = 0

    print("Quel pied utilisez-vous principalement?")
    print("1. Gauche")
    print("2. Droit")
    choice = int(input())
    if choice == 1:
        total += 1

    print("Quelle est votre nationalité préféré parmis les suivantes ?")
    print("1. Portugais")
    print("2. Argentin")
    print("3. Brésilien")
    print("4. Croate")
    choice = int(input())
    if choice == 2:
        total += 1

    print("Quel est votre championnat de football préféré?")
    print("1. Premier League")
    print("2. La Liga")
    print("3. Ligue 1")
    print("4. Serie A")
    choice = int(input())
    if choice == 2:
        total += 1

    print("Quelle est votre plus grande capacité?")
    print("1. Dribbler")
    print("2. Passer")
    print("3. Marquer")
    print("4. Contrôler le jeu")
    choice = int(input())
    if choice == 3:
        total += 1

    if total == 4:
        print("Vous avez un profil similaire à celui de Lionel Messi.")
    elif total == 3:
        print("Vous avez un profil similaire à celui de Neymar.")
    elif total == 2:
        print("Vous avez un profil similaire à celui de Cristiano Ronaldo.")
    else:
        print("Vous avez un profil similaire à celui de Luka Modric.")

if __name__ == "__main__":
    main()
