# include <iostream>
# include <vector>
using namespace std;

int main() 
{
    // Exercice 1 : somme de deux vecteurs
    vector<int> vecteur1 = {1, 2, 3, 4, 5};
    vector<int> vecteur2 = {6, 7, 8, 9, 10};
    vector<int> somme(5);
    cout << "{";
    for (int i = 0; i < 5; i++) {
        somme [i] = vecteur1[i] + vecteur2[i];
        if (i < 4){
            cout << somme [i] << " ";
        } else {
            cout << somme [i];
        }
    }
    cout << "}" << endl;

    // Exercice 2 : Suppression des doublons
    vector<int> vecteur = {1, 4, 2, 3, 2, 3, 4, 2, 4, 4};
    for (int i = 0; i < vecteur.size(); i++)
    {
        for (int j = i + 1; j < vecteur.size(); j++)
        if(vecteur[i] == vecteur[j])
        {
            vecteur.erase(vecteur.begin() + j);
            j--;
        }
    }

    for (int elt:vecteur)
    {
        cout << elt << " ";
    }
    cout << "\n";
}