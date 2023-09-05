# include <iostream>
# include <fstream>
# include <string>
# include <cctype>
# include <algorithm>
# include <vector>
# include <iomanip>
using namespace std;

// Création fichier .h vide
void creationFichier_h(string nomClasse)
{
    std::ofstream fichier_h(nomClasse + ".h");
    if (fichier_h.is_open()) {
        std::cout << "Le fichier " << nomClasse << ".h a bien été créé" << endl;
        fichier_h.close();
    } else {
        std::cout << "Erreur lors de la création du fichier " << nomClasse << ".h" << endl;
        // Quitter le programme en cas d'erreur
    }    
}

// Ecriture dans le fichier .h
void ecritureFichier_h(string nomClasse, vector<string> attributs)
{
    string nomClasse_Maj = nomClasse;
    transform(nomClasse_Maj.begin(), nomClasse_Maj.end(), nomClasse_Maj.begin(), ::toupper);

    int nbAttribut = size(attributs);

    std::ofstream file(nomClasse + ".h");
    if (file.is_open()) {

        file << "# ifndef " + nomClasse_Maj + "_H" << endl;
        file << "# define " + nomClasse_Maj + "_H\n" << endl;
        file << "class " + nomClasse + " {" << endl;
        file << "public:" << endl;
        file << "\t" + nomClasse + "();" << endl;
        file << "\t" + nomClasse + "(";
        for (int i = 0; i < nbAttribut; i++)
        {
            if (i == nbAttribut - 1){
                file << "int " + attributs[i] + ");\n" << endl;;
            } else {
            file << "int " + attributs[i] + ",";
            }
        }

        for (int i = 0; i < nbAttribut; i++)
        {
            attributs[i][0] = toupper(attributs[i][0]);
            file << "\tint get" << attributs[i] << "() const;" << endl;
            attributs[i][0] = tolower(attributs[i][0]);
            file << "\tvoid set" << attributs[i] << "(int " << attributs[i] << ");\n" << endl;
        }

        file << "private:\n";
        for (auto e: attributs)
        {
            file << "\tint " + e +";" << endl;
        }
        file << "};\n" << endl;
        file << "# endif" << endl;

        cout << "Fichier " + nomClasse + ".h enregistré !" << endl;
        file.close();
    } else {
        cout << "Problème d'ouverture du fichier pour écriture... Veuillez réessayer l'opération." << endl;
    }

}

void generationFichierh(string nomClasse, vector<string> &attributs)
{
    creationFichier_h(nomClasse);
    ecritureFichier_h(nomClasse, attributs);
}

//int main() 
//{
//    string nomClasse = "MyClass";
//    vector <string> attributs(2);
//    attributs[0] = "value1";
//    attributs[1] = "value2";
//    generationFichierh(nomClasse, attributs);
//    return 0;
//}
