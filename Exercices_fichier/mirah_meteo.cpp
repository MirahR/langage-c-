# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
using namespace std;

int main()
{
    string texte;
    string ligne[3][4];
    ifstream file("meteo.csv");
    getline(file, texte);
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 4 ; j++){
            if(j == 3){
                getline(file, texte);
            }
            else 
        getline(file, texte, ',');
        ligne[i][j] = texte;
        }
    }

    cout << "\n";
    file.close();

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << ligne[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    double sommeTempMin = stod(ligne[0][1]) + stod(ligne[1][1]) + stod(ligne[2][1]);
    double sommeTempMax = stod(ligne[0][2]) + stod(ligne[1][2]) + stod(ligne[2][2]);
    double totalPrecip = stod(ligne[0][3]) + stod(ligne[1][3]) + stod(ligne[2][3]);
    
    cout << "Température minimale moyenne = " << sommeTempMin/3 << endl;
    cout << "Température maximale moyenne = " << sommeTempMax/3 << endl;
    cout << "Total des précipitations pour le mois = " << totalPrecip << endl;

}
