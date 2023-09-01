# include <iostream>
# include <string>
using namespace std;

class Livre{
    private:
        string titre;
        string auteur;
        int anneePublication;
        int nbPages;

    public:
    Livre(string titre, string auteur, int anneePublication, int nbPages){
        this->titre = titre;
        this->auteur = auteur;
        this->anneePublication = anneePublication;
        this->nbPages = nbPages;
    }

    string get_titre()
    {
        cout << "Titre : " << titre << endl;
        return titre;
    }

    string set_titre(string Titre)
    {
        titre = Titre;
        cout << "Titre modifié : " << titre << endl;
        return titre;
    }

    string get_auteur()
    {
        cout << "Auteur : " << auteur << endl;
        return auteur;
    }

    string set_auteur(string Auteur)
    {
        auteur = Auteur;
        cout << "Auteur modifié : " << auteur << endl;
        return auteur;
    }

    int get_anneePublication()
    {
        cout << "Année de publication : " << anneePublication << endl;
        return anneePublication;
    }

    int set_anneePublication(int AnneePublication)
    {
        anneePublication = AnneePublication;
        cout << "Année de publication modifiée : " << anneePublication << endl;
        return anneePublication;
    }

    int get_nbPages()
    {
        cout << "Nombre de pages : " << nbPages << endl;
        return nbPages;
    }

    int set_nbPages(int NbPages)
    {
        nbPages = NbPages;
        cout << "Nombre de pages modifiées : " << nbPages << endl;
        return nbPages;
    }

    void afficherInfo()
    {
        cout << "Titre : [" << titre << "]" << endl;
        cout << "Auteur : [" << auteur << "]" << endl;
        cout << "Année de publication : [" << anneePublication << "]" << endl;
        cout << "Nombre de pages : [" << nbPages << "]" << endl;
        cout << "\n";
    }

    bool estAncient(int anneeActuel)
    {
        int age =  anneeActuel - anneePublication;
        if (age > 30){
            cout << "Le livre a plus de 30 ans" << endl;
            return true;
        } else {
            cout << "Le livre a moins de 30 ans" << endl;
            return false;
        }
    }

    ~Livre(){
        cout << "Le livre a été supprimé" << endl;
    }
};

int main()
{
    Livre livre1("Harry Potter", "J.K. Rowling", 1997, 450);
    Livre livre2("Les Misérables", "Victor Hugo", 1862, 1500);
    Livre livre3("Dune", "Frank Herbert", 1965, 800);

    livre1.get_anneePublication();
    livre1.set_auteur("Mimi");
    livre1.estAncient(2023);
    livre1.afficherInfo();

    livre2.get_titre();
    livre2.get_nbPages();
    livre2.set_anneePublication(2002);
    livre2.afficherInfo();

    livre3.get_auteur();
    livre3.set_titre("Desert");
    livre3.set_nbPages(1);
    livre3.afficherInfo();
}
