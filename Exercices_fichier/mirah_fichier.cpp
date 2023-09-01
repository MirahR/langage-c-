# include <iostream>
# include <string>
# include <fstream>

int main()
{
    std::string nomFichier;
    std::string texte;
    int choix;
    std::cout << "Entrez le nom du fichier :" << std::endl;
    std::cin >> nomFichier;
    std::cin.ignore();

    std::ofstream file(nomFichier + ".txt");
    if (file.is_open()) {
        std::cout << "Veuillez saisir un texte" << std::endl;
        while(true){
        getline(std::cin, texte);
        if (texte.empty()){
            break;
        }
        file << texte << std::endl;
        }
        std::cout << "Fichier enregistré !" << std::endl;

        file.close();
    } else {
        std::cout << "Problème d'ouverture du fichier pour écriture... Veuillez réessayer l'opération." << std::endl;
    }


    do{
    std::cout << "Voulez-vous lire le fichier ?" << std::endl;
    std::cout << "1. Oui" << std::endl;
    std::cout << "2. Non" << std::endl;
    std::cin >> choix;

    switch (choix)
    {
        case 1:
        {
            std::ifstream file(nomFichier + ".txt");
            while (std::getline(file, texte)) {
                std::cout << texte << std::endl;
            }
            file.close();
            return 0;

            if (file) {
                std::string ligne;
                while (getline(file, ligne)) {
                    std::cout << ligne << std::endl;
                }
                file.close();
            } else {
                std::cout << "Erreur à l'ouverture du fichier" << std::endl;
            }
        }
        case 2:
        {
            std::cout << "Aucun fichier ouvert. Fermeture..." << std::endl;
            break;
        }
        default:
            break;
    }
    } while(choix == 1);
}