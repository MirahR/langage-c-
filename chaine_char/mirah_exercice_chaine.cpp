# include <iostream>
# include <string>

int main()
{
    std::string film1 = "Bienvenue à Zombieland";
    std::string film2 = "Pirate des Caraibes";
    std::string film1_cpy = film1;

    // Concaténation
    std::string film_concate_1 = film1 + "\n" + film2;
    std::string film_concate_2 = film1_cpy.append("\n").append(film2);
    std::cout << film_concate_1 << std::endl;
    std::cout << film_concate_2 << std::endl;

    std::cout << "la longueur de film_concate_1 vaut : " << film_concate_1.length() << std::endl;
    std::cout << "la longueur de film_concate_2 vaut : " << film_concate_2.length() << std::endl;
    
    bool egal = (film_concate_1 == film_concate_2);
    int resultat1 = film_concate_1.compare(film_concate_2);

    std::cout << "operateur == : " << egal << std::endl;
    std::cout << "methode compare() : " << (resultat1 == 0) << std::endl;
    
    if (film_concate_1 != film_concate_2) {
        std::cout << "Les deux chaînes sont différentes" << std::endl;
    } else {
        std::cout << "Les deux chaînes sont identiques" << std::endl;
    }

}