# include <iostream>
# include <iomanip>

float celsiusFar(float temperature)
{
    return (temperature * 9/5) + 32;
}

float farCelsius(float temperature)
{
    return (temperature - 32) * 5/9;
}

int main()
{
    char choix;
    float temperature = 0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Bienvenue dans le convertisseur de température en C++." << std::endl;
    std::cout << "Choisissez le format de conversion (C pour Celsius vers Fahrenheit, F pour Fahrenheit vers Celsius) : C" << std::endl;
    std::cin >> choix;

    if (choix == 'c' || choix == 'C'){
        std::cout << "Entrez la température en degrés Celsius : " << std::endl;
        std::cin >> temperature;
        std::cout << temperature <<" degrés Celsius équivalent à " << celsiusFar(temperature) << " degrés Fahrenheit." << std::endl;
    } else if (choix == 'f' || choix == 'F'){
        std::cout << "Entrez la température en degrés Fahreneit : " << std::endl;
        std::cin >> temperature;
        std::cout << temperature << " degrés Fahrenheit équivalent à " << farCelsius(temperature) << " degrés celcius." << std::endl;
    }
}