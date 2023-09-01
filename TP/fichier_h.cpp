# include <iostream>
# include <fstream>
# include <string>
# include <cctype>
# include <algorithm>
# include <vector>
using namespace std;

void creationFichier_h(string nom_de_la_classe)
{
    std::ofstream fichier_h(nom_de_la_classe + ".h");

    if (fichier_h.is_open()) {
        std::cout << "Le fichier " << nom_de_la_classe << ".h a bien été créé" << std::endl;
        fichier_h.close();
    } else {
        std::cout << "Erreur lors de la création du fichier " << nom_de_la_classe << ".h" << std::endl;
        // Quitter le programme en cas d'erreur
    }    
}

void ecritureFichier_h(string nom_de_la_classe, vector<string> attribut)
{
    string nom_de_la_classe_Maj = nom_de_la_classe;
    transform(nom_de_la_classe_Maj.begin(), nom_de_la_classe_Maj.end(), nom_de_la_classe_Maj.begin(), ::toupper);

    int nbAttribut = size(attribut);

    std::ofstream file(nom_de_la_classe + ".h");
    if (file.is_open()) {

        file << "# ifndef " + nom_de_la_classe_Maj + "_H" << std::endl;
        file << "# define " + nom_de_la_classe_Maj + "_H\n" << std::endl;
        file << "class " + nom_de_la_classe + " {" << std::endl;
        file << "public:" << endl;
        file << "\t" << nom_de_la_classe + "();" << endl;
        file << "\t" << nom_de_la_classe << "(";
        for (int i = 0; i < nbAttribut; i++)
        {
            if (i == nbAttribut - 1){
                file << "int " << attribut[i] << ");" << endl;;
            } else {
            file << "int " << attribut[i] << ",";
            }
        }


        std::cout << "Fichier enregistré !" << std::endl;
        file.close();
    } else {
        std::cout << "Problème d'ouverture du fichier pour écriture... Veuillez réessayer l'opération." << std::endl;
    }

}

int main() 
{
    creationFichier_h("MyClass");
    vector <string> attribut(2);
    attribut[0] = "value1";
    attribut[1] = "value2";
    ecritureFichier_h("MyClass", attribut);



    return 0;
}
