# include <iostream>
# include <string>

int main()
{
    std::string chaine1, chaine2, ss_chaine;
    std::cout << "Entrez une chaine de caractère : " << std::endl;
    std::cin >> chaine1;
    std::cout << "Entrez une deuxième chaine de caratère : " << std::endl;
    std::cin >> chaine2;

    int len_chaine1 = chaine1.length();
    int len_chaine2 = chaine2.length();

    if (chaine1.size() == chaine2.size()){
        std::cout << "\nMethode size()\nLes deux chaines ont la même longueur" << std::endl;
    } else {
        std::cout << "\nMethode size()\nLes deux chaines n'ont pas la même longueur" << std::endl;
    }

    std::cout << chaine1[0] << " est le premier caractère de " << chaine1 << std::endl;
    std::cout << chaine1[len_chaine1 - 1] << " est le dernier caractère de " << chaine1 << std::endl;

    std::cout << chaine1.at(len_chaine1/2) << " est le caractère situé à la position n/2 de " << chaine1 << std::endl;
    std::cout << chaine2.at(len_chaine2/2) << " est le caractère situé à la position n/2 de " << chaine2 << std::endl;

    std::cout << "Entrez une sous-chaine : " << std::endl;
    std::cin >> ss_chaine;
    size_t index1 = chaine1.find(ss_chaine);
    size_t index2 = chaine2.find(ss_chaine);

    if (index1 != std::string::npos && index2 != std::string::npos) {
        std::cout << "\n'" << ss_chaine << "' est dans " << chaine1 << " à l'indice : " << index1 << std::endl;
        std::cout << "\n'" << ss_chaine << "' est dans " << chaine2 << " à l'indice : " << index2 << std::endl;
    } else if (index1 != std::string::npos){
        std::cout << "\n'" << ss_chaine << "' est dans " << chaine1 << " à l'indice : " << index1 << std::endl;
    } else if (index2 != std::string::npos){
        std::cout << "\n'" << ss_chaine << "' est dans " << chaine2 << " à l'indice : " << index2 << std::endl;
    } else {
        std::cout << "\nAucune correspondance pour '" << ss_chaine << "' n'a été trouvée dans les deux chaines " << chaine1 << " et " << chaine2 << std::endl;
    }
}