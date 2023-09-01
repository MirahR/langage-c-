# include <iostream>
# include <climits>

int sommeParValeur(int a, int b)
{
    int maxInt = 2147483647;
    int result = a + b;
    if (result > maxInt)
        std::cout << "La somme des deux valeurs dépasse la limite d'un entier" << std::endl;
        return 0;
    else
        return result;
}

void produitParReference (int &a, int &b)
{
    a = a*b;
}

int main()
{
    int a;
    int b;
    std::cout << "Saississez un nombre a : ";
    std::cin >> a;
    std::cout << "Saississez un autre nombre b : ";
    std::cin >> b;

    std::cout << a << " + " << b << " = " << sommeParValeur(a,b) << std::endl;
    std::cout << a << " * " << b << " = " << a*b << std::endl;
    produitParReference(a,b);
    std::cout << "La nouvelle valeur de a est : " << a << std::endl;

}