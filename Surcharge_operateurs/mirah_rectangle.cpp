# include <iostream>
using namespace std;

class Rectangle
{
private:
    double largeur;
    double hauteur;

public:
    Rectangle  (double largeur, double hauteur){
        this->largeur = largeur;
        this->hauteur = hauteur;
    }

    bool operator == (Rectangle otherRect){
        return (largeur * hauteur) == (otherRect.largeur * otherRect.hauteur);
    }

    bool operator != (Rectangle otherRect){
        return !(*this == otherRect);
    }

    ~Rectangle(){};
};

int main()
{
    Rectangle rect1(10, 15);
    Rectangle rect2(11, 15);
    if (rect1 == rect2){
        cout << "Les deux rectangles ont la même surface." << endl;
    } else {
        cout << "Les deux rectangles n'ont pas la même surface." << endl;
    }

    if (rect1 != rect2){
        cout << "Les deux rectangles n'ont pas la même surface." << endl;
    } else {
        cout << "Les deux rectangles ont la même surface." << endl;
    }
}
