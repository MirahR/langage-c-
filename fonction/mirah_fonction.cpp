# include <iostream>
# include <string>

int somme(int a, int b)
{
    return a+b;
}

double diviser(double a, double b)
{
    if (b == 0){
        std::cout << "Division par zéro impossible" << std::endl;
    } else 
        return a/b;
}

std::string concatenation(std::string a, std::string b)
{
    return a + " " + b;
}

void afficherInfos(int age, std::string nom)
{
    std::cout << "Nom : [" << nom << "], Age : [" << age << "]" << std::endl;
}

int main()
{
    int a;
    int b;
    double c;
    double d;
    int age;
    std::string chaine1;
    std::string chaine2;
    std::string nom;
    std::cout << "Insérer un entier a :" << std::endl;
    std::cin >> a;
    std::cout << "Insérer un entier b :" << std::endl;
    std::cin >> b;
    std::cout << "Insérer un double c :" << std::endl;
    std::cin >> c;
    std::cout << "Insérer un double d :" << std::endl;
    std::cin >> d;
    std::cout << "Insérer un premier mot :" << std::endl;
    std::cin >> chaine1;
    std::cout << "Insérer un deuxième mot :" << std::endl;
    std::cin >> chaine2;
    std::cout << "Insérer un age :" << std::endl;
    std::cin >> age;
    std::cout << "Insérer un nom :" << std::endl;
    std::cin >> nom;

    std::cout << "somme : " << somme (a,b) << std::endl;
    std::cout << "division : " << diviser (c, d) << std::endl;
    std::cout << "concatenation : " << concatenation(chaine1, chaine2) << std::endl;
    std::cout << "Infos : " << std::endl;
    afficherInfos(age, nom);


}