# include <iostream>
using namespace std;

class Matrice
{
private:
    int matrice[3][3];

public:
ostream &operator<<(ostream &os){
    for (int i = 0; i < 3; i++){
        os << "|";
        for (int j = 0; j < 3; j++){
            os << matrice[i][j];
            if (j < 2)
                os << " ";
        }
        os << "|" << endl;
    }
    return os;
}

istream &operator>>(istream &is) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            is >> matrice[i][j];
        }
    }
    return is;
}

int operator()(int ligne, int colonne){
    return matrice[ligne - 1][colonne - 1];
}

    ~Matrice(){};
};



int main()
{
    Matrice matrice;
    cout << "Entrez matrice 3x3 sous la forme : 0 0 0 0 0 0 0 0 0" << endl;
    matrice >> std::cin ;
    matrice.operator<<(std::cout);

}