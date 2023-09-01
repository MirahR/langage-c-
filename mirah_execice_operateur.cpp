# include <iostream>

// 1. Utilisez les opérateurs arithmétiques pour calculer les résultats suivants et affichez-les :
int somme(int x, int y)
{
    return x + y;
}

int difference(int x, int y)
{
    return x - y;
}

int multiplication(int x, int z)
{
    return x * z;
}

float division(int x, int y)
{
    if (y == 0){
        std::cout << "Division par 0 impossible" << std::endl;
        return 0;
    } else {
        return x / y;
    }
}

int reste(int x, int y)
{
    if (y == 0){
        std::cout << "Division par 0 impossible" << std::endl;
        return 0;
    } else {
        return x % y;
    }
}

int main()
{
    int x;
    int y;
    float z;
    std::cout << "entrez un entier x : ";
    std::cin >> x;
    std::cout << "entrez un autre entier y : ";
    std::cin >> y;
    std::cout << "entrez un flottant z : ";
    std::cin >> z;
    std::cout << "la somme de " << x << " et " << y << " vaut : " << somme(x,y) << std::endl;
    std::cout << "la difference de " << x << " et " << y << " vaut : " << difference(x,y) << std::endl;
    std::cout << "la multiplication de " << x << " et " << z << " vaut : " << multiplication(x,z) << std::endl;
    std::cout << "la division de " << x << " et " << y << " vaut : " << division(x,y) << std::endl;
    std::cout << "le reste de la division de " << x << "et " << y << " vaut : " << reste(x,y) << std::endl;
    if (x == y){
        std::cout << x << " est égal à " << y << std::endl;
    } else {
        std::cout << x << " n'est pas égal à " << y << std::endl;
    }

    if (x != y){
        std::cout << x << " est différent de " << y << std::endl;
    } else {
        std::cout << x << " n'est pas différent de " << y << std::endl;
    }
    
    if (x > y){
        std::cout << x << " est supérieur à " << y << std::endl;
    } else {
        std::cout << x << " n'est pas supérieur à " << y << std::endl;
    }
    
    if (x < y){
        std::cout << x << " est inférieur à " << y << std::endl;
    } else {
        std::cout << x << " n'est pas inférieur à " << y << std::endl;
    }
    
    if (x >= y){
        std::cout << x << " est supérieur ou égal à " << y << std::endl;
    } else {
        std::cout << x << " n'est pas supérieur ou égal à " << y << std::endl;
    }
    
    if (x <= y){
        std::cout << x << " est inférieur ou égal à " << y << std::endl;
    } else {
        std::cout << x << " n'est pas inférieur ou égal à " << y << std::endl;
    }
    
    if (x > 0 && y > 0){
        std::cout << x << " et " << y << " sont positifs" << std::endl;
    }
    
    if (x < 0 || y < 0){
        std::cout << x << " ou " << y << " sont négatifs" << std::endl;
    }
    
    if (x % 2 == 0 && z > 10){
        std::cout << x << " est divisible par 2 et " << z << " est supérieur à 10" << std::endl;
    }
}