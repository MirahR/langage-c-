#include<iostream>
#include<string>
#include <vector>
#include <iomanip> 
#include "GenerationCPP.cpp"
using namespace std;


string ajoutNomClasse()
{
    string nomClasse;
    cout <<"Merci de saisir le nom de votre Classe\n";
    cin>> nomClasse;    
    nomClasse[0]= toupper(nomClasse[0]);
    return nomClasse;
} 

vector<string> ajouterAttribut(vector<string> attributs)
{
    string attribut;
    cout << "Nom de l'attribut: \n";
    cin.ignore(); 
    cin>> attribut;
    attributs.push_back(attribut);
    return attributs;
} 

void affichageAttribut(vector<string> attributs, string nomClasse)
{
    cout<<"NOM DE LA CLASSE : "<<nomClasse<<endl;
    cout<<endl;
    cout<<"Listes des attributs"<<endl;
    for (string attribut : attributs)
    {
        cout<<attribut<<endl;
    }
}
       

int main(){

    string nomClasse;
   
    vector<string> attributs;
    nomClasse = ajoutNomClasse();
    
    bool ajouter=true;

    while(ajouter){
        int choix;
        cout <<"1. Ajouter un attribut de classe\n";
        cout <<"2. afficher la liste des attributs de la classe\n";
        cout <<"3. Terminer\n";
        cin>> choix;
            
      switch (choix)
      {
      case 1:
        attributs=ajouterAttribut(attributs);
        break;
      case 2:
        affichageAttribut(attributs,nomClasse);
        break;
      case 3:
        ajouter = false;
        break;
      default:
        ajouter = false;
        cout<< "Erreur de saisie!!\n";
        break;
      }
    }

    generationFichierMain(nomClasse, attributs);
}



