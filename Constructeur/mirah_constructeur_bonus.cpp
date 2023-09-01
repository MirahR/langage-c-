# include <iostream>
# include <string>
using namespace std;

class Livre{
    private:
        string titre;
        string auteur;
        int anneePublication;
        int nbPages;
        bool estEmprunte;

    public:
    Livre(string titre, string auteur, int anneePublication, int nbPages, bool estEmprunte){
        this->titre = titre;
        this->auteur = auteur;
        this->anneePublication = anneePublication;
        this->nbPages = nbPages;
        this->estEmprunte = estEmprunte;
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

    bool get_estEmprunte()
    {
        return estEmprunte;
    }

    ~Livre(){
        cout << "Le livre a été supprimé" << endl;
    }
};

class Emprunteur{
    private:
        string nom;
        Livre* livre[10];
        int nombreLivresEmprunte;

    public:

    Emprunteur(string nom, Livre livre[10], int nombreLivresEmprunte)
    {
        this->nom = nom;
        this->livre[10] = livre;
        this->nombreLivresEmprunte = nombreLivresEmprunte;
    }

    void afficherListeLivreEmprunte()
    {
        cout << "Liste des livres empruntés :" << endl;
        for (int i = 0; livre[i] != "\0"; i++)
        {
            cout << i + 1 << livre[i] << endl;
        }
    }

    void emprunt_livre(Livre& livre)
    {
        int max_livre = 10;
        int choix;
        if (nombreLivresEmprunte < max_livre){
        cout << "Voulez-vous emprunter un livre ?" << endl;
        cout << "1. Oui" << endl;
        cout << "2. Non" << endl;
        cin >> choix;
        switch(choix)
        {
            case 1:
            {
            livre.get_estEmprunte();
            livre[nombreLivresEmprunte + 1] = &livre;
            nombreLivresEmprunte++;
            }
            case 2:
                break;
            default:
                break;
        }
        } else {
            cout << "Nombre de livre emprunté max atteint. Veuillez rendre des livres pour pouvoir emprunter à nouveau !" << endl;            
        }
    }
};

int main()
{
    Livre livre1("Harry Potter", "J.K. Rowling", 1997, 450, false);
    Livre livre2("Les Misérables", "Victor Hugo", 1862, 1500, false);
    Livre livre3("Dune", "Frank Herbert", 1965, 800, true);

    Emprunteur personne1("Kai", {livre1, livre2}, 2);
    personne1.afficherListeLivreEmprunte();
}
