# include <iostream>
# include <string>
using namespace std;

// Exercice 1 : Echange de valeurs
void echange(int *a, int *b)
{
    int *tmp;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}

// Exercice 2 : Somme d'un tableau
void sommeTableau(int *tab,int taille)
{
    int somme = 0;
    for (int i = 0; i < taille; i++)
    {
        somme += *(tab + i);
    }
    cout << "La somme des éléments du tableau vaut = " << somme << endl;
}

// Exercice 3 : Copie de chaîne
void copieChaine(const char *source, char *destination)
{
    while(*source != '\0'){
        *destination = *source;
        *source++;
        *destination++;
    }
    *destination = '\n';
}

// Exercice 4 : Utilisation de double pointeurs
void creerMatrice(int **matrice, int lignes, int colonnes)
{
    for (int i = 0; i < lignes; i++)
    {
        matrice[i] = new int [colonnes];
    }
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
            matrice[i][j] = i + j;
        }
    }
}

void afficherMatrice(int **matrice, int lignes, int colones)
{
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colones; j++)
        {
            cout << matrice[i][j] << ", ";
        }
        cout << endl;
    }
}

// Exercice 5 : Manipulation d'adresses
void adressePointeur(int *ptr)
{
    cout << "Adresse du pointeur : " << &ptr << endl;
    cout << "Adresse de la variable : " << ptr << endl;
}

int main()
{
    //Exercice 1 :
    int a = 2;
    int b = 3;
    int *c = &a;
    cout << "Avant c : " << c << endl;
    cout << "Avant échange : a = " << a << "; b = " << b << endl;
    echange(&a, &b);
    cout << "Après échange : a = " << a << "; b = " << b << endl;
    cout << "Après c : " << c << endl;

    //Exercice 2 :
    int tab [5] = {1, 2, 3, 4, 5};
    int *ptr = &tab[0];
    sommeTableau(ptr, 5);

    //Exercice 3 :
    const char *source = "Hello";
    char destination[10];
    cout << "Source avant copie = " << source << endl;
    copieChaine(source, destination);
    cout << "Source après copie = " << source << endl;
    cout << "Destination après copie = " << destination << endl;
    
    //Exercice 5 :
    int var = 14;
    int *ptr = &var;
    adressePointeur(ptr);

    //Exercice 4 :
    int lignes = 2;
    int colones = 4;
    int **matrice = new int *[2];
    creerMatrice(matrice, lignes, colones);
    afficherMatrice(matrice, lignes, colones);


}