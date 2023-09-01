# include <iostream>
# include <string>
# include <cmath>
using namespace std;

class Forme{
    public:
    double aire(){
        return 0.0;
    }
};

class Rectangle : public Forme {
    public:
    double largeur;
    double hauteur;

    Rectangle(double largeur, double hauteur){
    this->largeur = largeur;
    this->hauteur = hauteur;
    }

    double aire()
    {
        return largeur * hauteur;
    }
};

class Cercle : public Forme {
    private:
    double rayon;

    public:
    Cercle(double rayon){
        this->rayon = rayon;
    }

    double aire()
    {
        return M_PI * rayon * rayon;
    }
};

int main()
{
    Rectangle rectangle1(6.0, 2.0);
    double aire_rect = rectangle1.aire();
    cout << aire_rect << endl;
    Cercle cercle1(3);
    double aire_cerc = cercle1.aire();
    cout << aire_cerc << endl;
}