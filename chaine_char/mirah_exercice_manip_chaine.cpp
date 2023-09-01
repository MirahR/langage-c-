# include <iostream>
# include <string>
# include <algorithm>
# include <cctype>

int main()
{
    system("chcp 65001");
    int choix;
    int position;
    std::string ss_chaine;
    std::string ss_chaine_replace;
    int longueur;
    int longueur_ss_chaine;
    std::string texte = "La programmation C++ est intéressante !";
    std::string texte_cpy = texte;
    std::string texte_maj = texte;

    do {
    std::cout << "Texte : " << texte << std::endl;
    std::cout << "Sélectionner une option :" << std::endl;
    std::cout << "1. Afficher la longueur de la chaine" << std::endl;
    std::cout << "2. Afficher le nième caractère de la chaine" << std::endl;
    std::cout << "3. Remplacer un mot" << std::endl;
    std::cout << "4. Inverser l'ordre des caractères de la chaine" << std::endl;
    std::cout << "5. Afficher la chaine de caractère en majuscule" << std::endl;
    std::cin >> choix;
    std::cout << "\n";

    switch(choix)
    {
        case 1:
            longueur = texte.size();
            std::cout << "La longueur de la chaine est de " << longueur << "\n" << std::endl;
            break;
        case 2:
            std::cout << texte << "\nInsérer le numéro de position du caractère que vous souhaitez regarder : "<< std::endl;
            std::cin >> position;
            std::cout << texte.at(position - 1) << std::endl;
            break;
        case 3:
            std::cout << "Quel mot voulez-vous remplacer ?" << std::endl;
            std::cin >> ss_chaine;
            longueur_ss_chaine = ss_chaine.size();
            std::cout << "Insérer le mot par lequel vous voulez remplacer " << ss_chaine << std::endl;
            std::cin >> ss_chaine_replace;
            texte_cpy.replace(texte_cpy.find(ss_chaine), longueur_ss_chaine, ss_chaine_replace);
            std::cout << "Voici le texte modifié :\n" << texte_cpy << "\n" << std::endl;
            break;
        case 4:
            std::reverse(texte_cpy.begin(), texte_cpy.end());
            std::cout << texte_cpy << "\n" << std::endl;
            break;
        case 5:
            std::transform(texte_maj.begin(), texte_maj.end(), texte.begin(), ::toupper);
            std::cout << texte_maj << "\n" << std::endl;
            break;
        default:
            std::cout << "Aucune option choisie !\nFermeture..." << std::endl;
            break;
    }} while(choix >= 1 && choix <= 5);
}