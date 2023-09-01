# include <iostream>
# include <string>
using namespace std;

class CreatureMythique {
    private:
    string name;
    double taille;
    string pouvoir;

    public:
    CreatureMythique(string name, double taille, string pouvoir){
        this->name = name;
        this->taille = taille;
        this->pouvoir = pouvoir;
    }

    void afficherDetails()
    {
        cout << "Nom : " << name << endl;
        cout << "Taille : " << taille << endl;
        cout << "Pouvoir : " << pouvoir << endl;
    }

    ~CreatureMythique()
    {
        cout << "La créature n'existe plus !" << endl;
    }
};

class Griffon : public CreatureMythique {
    private:
    int nombreAile;
    string habitat;
    string nourriture;

    public:
    Griffon(string name, double taille, string pouvoir, int nombreAile, string habitat, string nourriture):CreatureMythique(name, taille, pouvoir)
    {
        this->nombreAile = nombreAile;
        this->habitat = habitat;
        this->nourriture = nourriture;
    }

    void afficherDetails()
    {
        cout << "Infos griffon :" << endl;
        CreatureMythique::afficherDetails();
        cout << "Nombre d'aile : " << nombreAile << endl;
        cout << "Habitat : " << habitat << endl;
        cout << "Nourriture : " << nourriture << endl;
    }

    ~Griffon(){
        cout << "\nUn grand cri se fait entendre !" << endl;
    }
};

class Fee : public CreatureMythique {
    public:
    string element;
    string habitat;
    string couleurCheveux;

    Fee(string name, double taille, string pouvoir, string element, string habitat, string couleurCheveux):CreatureMythique(name, taille, pouvoir){
        this->element = element;
        this->habitat = habitat;
        this->couleurCheveux = couleurCheveux;
    }

    void afficherDetails()
    {
        cout << "Infos Fee :" << endl;
        CreatureMythique::afficherDetails();
        cout << "Element : " << element << endl;
        cout << "Habitat : " << habitat << endl;
        cout << "Couleur de cheveux : " << couleurCheveux << endl;
    }

    ~Fee(){
        cout << "\nPluie de poudre féérique..." << endl;
    }
};

class Elfe : public CreatureMythique {
    public:
    string habitat;
    string arme;
    string couleurCheveux;

    Elfe(string name, double taille, string pouvoir, string habitat, string arme, string couleurCheveux):CreatureMythique(name, taille, pouvoir){
        this->habitat = habitat;
        this->arme = arme;
        this->couleurCheveux = couleurCheveux;
    }

    void afficherDetails()
    {
        cout << "Infos Elfe :" << endl;
        CreatureMythique::afficherDetails();
        cout << "Habitat : " << habitat << endl;
        cout << "Arme : " << arme << endl;
        cout << "Couleur de cheveux : " << couleurCheveux << endl;
    }

    ~Elfe()
    {
        cout << "\nUn soleil rouge se lève à l'aurore..." << endl;
    }
};

int main()
{
    Fee clochette("Clochette", 5, "Ingénieur", "Bricoleur", "Champignon", "Blond");
    clochette.afficherDetails();
    cout << "\n";
    Elfe legolas("Legolas", 1.85, "Vue perçant", "Forêt", "Arc et dagues", "Blond");
    legolas.afficherDetails();
    cout << "\n";
    Griffon piwi("Piwi", 5, "Griffes acérées", 2, "Montagne", "Sanglier");
    piwi.afficherDetails();
    cout << "\n";

}