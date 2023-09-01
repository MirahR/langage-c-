# include <iostream>
# include <string>

void ajouterEtudiant(std::string nom, std::string note, std::string liste_etudiants[][2])
{
    int taille = 100;
    for (int i = 0; i < taille; i++){
        if (liste_etudiants[i][0] == "\0"){
            liste_etudiants[i][0] = nom;
            liste_etudiants[i][1] = note;
            break;
        }
    }
}

void afficherListeEtudiants(std::string liste_etudiants[][2])
{
    std::cout << "\nListe des étudiants :" << std::endl;
    for (int i = 0; liste_etudiants[i][0] != "\0"; i++){
        std::cout << i + 1 << ". Nom : " << liste_etudiants[i][0] << ", Note : " << liste_etudiants[i][1] << std::endl;
    }
}

void rechercherEtudiant(std::string nom, std::string liste_etudiants[][2])
{
    std::string exist = " ne fait pas parti la classe";
    for (int i = 0; liste_etudiants[i][0] != "\0"; i++)
    {
        if (liste_etudiants[i][0] == nom){
            exist = " fait parti de la classe";
        } else {
            continue;
        }
    }
    std::cout << nom << exist << std::endl;
}

void triEleve(std::string liste_etudiants[][2])
{
    int choix;
    std::cout << "\n1. Trier par ordre alphabétique" << std::endl;
    std::cout << "2. Trier par note" << std::endl;
    std::cin >> choix;
    switch(choix)
    {
        case 1:
            for (int i = 0; liste_etudiants[i][0] != "\0"; i++)
            {
                for (int j = i + 1; liste_etudiants[j][0] != "\0"; j++)
                {
                    if (liste_etudiants[i][0] > liste_etudiants[j][0]){
                        swap(liste_etudiants[i][0], liste_etudiants[j][0]);
                        swap(liste_etudiants[i][1], liste_etudiants[j][1]);
                    }
                }
            }
            break;
        case 2:
            float note_i;
            float note_j;
            for (int i = 0; liste_etudiants[i][0] != "\0"; i++)
            {
                for (int j = i + 1; liste_etudiants[j][0] != "\0"; j++)
                {
                    note_i = std::stof(liste_etudiants[i][1]);
                    note_j = std::stof(liste_etudiants[j][1]);
                    if (note_i > note_j){
                        swap(liste_etudiants[i][0], liste_etudiants[j][0]);
                        swap(liste_etudiants[i][1], liste_etudiants[j][1]);
                    }
                }
            }
            break;
        default:
            break;
    }
}

void moyenneNote(std::string liste_etudiants[][2])
{
    int nombreEtudiant = 0;
    float note;
    float somme = 0;
    float moyenne = 0;
    for (int i = 0; liste_etudiants[i][0] != "\0"; i++){
        nombreEtudiant++;
        note = std::stof(liste_etudiants[i][1]);
        somme = somme + note;
    }
    moyenne = somme / nombreEtudiant;
    std::cout << "Nombre d'étudiant : " << nombreEtudiant << std::endl;
    std::cout << "Moyenne de la classe : " << moyenne << std::endl;

}

int main()
{
    std::string liste_etudiants[100][2];
    std::string nom;
    std::string note;
    int choix;
    ajouterEtudiant("Jeanne", "12", liste_etudiants);
    ajouterEtudiant("Serge", "13", liste_etudiants);
    ajouterEtudiant("Olivier", "19", liste_etudiants);
    ajouterEtudiant("Tom", "16", liste_etudiants);
    ajouterEtudiant("Polyanna", "9.5", liste_etudiants);
    ajouterEtudiant("Rémi", "13.5", liste_etudiants);
    ajouterEtudiant("Fabien", "11", liste_etudiants);
    ajouterEtudiant("jacques", "16", liste_etudiants);
    ajouterEtudiant("Lily", "14.5", liste_etudiants);
    ajouterEtudiant("Rose", "17", liste_etudiants);
    afficherListeEtudiants(liste_etudiants);

    do {
        std::cout << "\nMenu :" << std::endl;
        std::cout << "1. Ajouter un étudiant à la liste" << std::endl;
        std::cout << "2. Rechercher un étudiant dans la liste" << std::endl;
        std::cout << "3. Afficher la liste des étudiants" << std::endl;
        std::cout << "4. Trier la liste des étudiants" << std::endl;
        std::cout << "5. Afficher la moyenne de la classe" << std::endl;
        std::cout << "6. Quitter" << std::endl;
        std::cin >> choix;

        switch(choix)
        {
            case 1:
                std::cout << "Entrer le nom de l'élève à ajouter" << std::endl;
                std::cin >> nom;
                std::cout << "Entrer la note de l'élève" << std::endl;
                std::cin >> note;
                ajouterEtudiant(nom, note, liste_etudiants);
                break;
            case 2:
                std::cout << "Entrer le nom de l'élève à rechercher" << std::endl;
                std::cin >> nom;
                rechercherEtudiant(nom, liste_etudiants);
                break;
            case 3:
                afficherListeEtudiants(liste_etudiants);
                break;
            case 4:
                triEleve(liste_etudiants);
                afficherListeEtudiants(liste_etudiants);
                break;
            case 5:
                moyenneNote(liste_etudiants);
            case 6:
                std::cout << "Fermeture..." << std::endl;
                break;
            default:
                break;
        }
    } while (choix >= 1 && choix <= 5);
}