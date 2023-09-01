# include <iostream>

int selection(int choix){
    int montant;
    if (choix == 1 || choix == 2 || choix == 3 || choix == 4 || choix == 5){
        std::cout << "Entrez le montant à insérer" << std::endl;
    } else if (choix == 6){
        std::cout << "Opération annulée" << std::endl;
    } else {
        std::cout << "Choix incorrect, veuillez entrez le numéro de votre sélection (1-5): " << std::endl;
        std::cin >> choix;
    }
    return montant, choix;
}

float monnaie(float x, float y){
    return x - y;
}

void option (int option){
    float montant;
    if (option == 1){
        std::cout << "Entrez le montant à insérer" << std::endl;
        std::cin >> montant;
    } else {
        std::cout << "Opération annulée" << std::endl;
        break;
    }
}

void isEnough(float montant, float prix)
{
    int choixopt;
    int reste;
    if (montant >= prix){
        std::cout << "Boisson en cours de distribution..." << std::endl;
        std::cout << "Reste : " << monnaie(montant, prix) << std::endl;
        reste = monnaie(montant, prix);
    } else {
        std::cout << "Faites votre choix :\n1. Réessayer avec un autre montant \n2. Annuler l'opération" << std::endl;
        std::cin >> choixopt;
        option(choixopt);
    }
}

int main()
{
    int choix;
    float montant;
    float prix;
    int choixopt;
    int reste;
    std::cout << "Menu :" << std::endl;
    std::cout << "1. Chocholat chaud - 3.50€" << std::endl;
    std::cout << "2. Cappuccino - 4.00€" << std::endl;
    std::cout << "3. Expresso - 3.50€" << std::endl;
    std::cout << "4. Café allongé  - 4.00€" << std::endl;
    std::cout << "5. Thé - 3.00€" << std::endl;
    std::cout << "6. Annuler l'opération" << std::endl;
    std::cout << "Entrez le numéro de votre sélection (1-6): " << std::endl;
    std::cin >> choix;

    selection(choix);
    while (choix != 6){
        if (choix == 1 || choix == 3){
            prix = 3.5;
            std::cin >> montant;
            isEnough(montant, prix);
            break;
        } else if (choix == 2 || choix == 4){
            prix = 4.0;
            std::cin >> montant;
            isEnough(montant, prix);
            break;
        } else if (choix == 5){
            prix = 3.0;
            std::cin >> montant;
            isEnough(montant, prix);
            break;
        } else {
            std::cout << "Opération annulée" << std::endl;
            break;
        }
    }

}