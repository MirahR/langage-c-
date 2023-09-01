# include <iostream>
# include <vector>
# include <string>
using namespace std;

class Tache{
    private:
    string nom;
    bool terminee;

    public:
    Tache(string nom, bool terminee){
        this->nom = nom;
        this->terminee = terminee;
    }

    void ajouterTache(vector<Tache> liste, string nom)
    {
        liste.push_back(nom);
        cout << nom << " a bien été ajouté à la liste de tâches" << endl;
    }

    void afficheTache(vector<Tache> listeTache)
    {
        for(auto elt:listeTache)
        {
            cout << elt << " ";
        }
        cout << "\n";
    }

    void estTerminee(vector<Tache> listeTache, int numero)
    {
        for (int i = 0; listeTache[i] != '\0', i++)
        {
            listeTache.terminee[numero] = true;
        }
    }

    void supprimeTache(vector<Tache> listeTache, string nom)
    {
        for (int i = 0; listeTache[i] != '\0'; i++)
        {
            if (listeTache.nom[i] = nom)
            {
                listeTache.erase(listeTache.begin() + i);
            } else {
                continue;
            }
        }
    }

};

void menu(Tache listeTache)
{
    int choix;
    cout << "Menu"
        << "1. Ajouter une nouvelle tâche à la liste"
        << "2. Afficher la liste des tâches"
        << "3. Marquer une tâche comme terminée"
        << "4. Supprimer une tâche de la liste"
        << "5. Quitter la programme" << endl;
    cin >> choix;

    switch(choix)
    {
        case 1:
            listeTache.ajouterTache();
        case 2:
            listeTache.afficheTache();
        case 3:
            listeTache.estTerminee();
        case 4:
            listeTache.supprimeTache();
        case 5:
            cout << "Fermeture du programme..." << endl;
            break;
        default:
            break;
    }
}

int main()
{
    vector<Tache> listeTache;
    menu(listeTache);

    return 0;
}