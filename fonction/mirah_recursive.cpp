# include <iostream>

int sommeChiffres(int nombre)
{
    if (nombre < 10){
        return nombre;
    } else {
        int unite = nombre % 10;
        return unite + sommeChiffres(nombre /10);
    }
}

int main()
{
    int a = 999999999;
    std::cout << sommeChiffres(a) << std::endl;
}