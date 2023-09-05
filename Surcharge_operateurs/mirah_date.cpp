# include <iostream>
using namespace std;

class Date{
    public:
    Date (int jour, int mois, int annee){
        this->jour = jour;
        this->mois = mois;
        this->annee = annee;
    }

    bool operator == (Date otherDate){ 
        return (jour == otherDate.jour && mois == otherDate.mois && annee == otherDate.annee);
        //{
        //    cout << "Les deux dates sont égales : True" << endl;
        //    return true;
        //} else {
        //    cout << "Les deux dates sont égales : False" << endl;
        //    return false;
        //}
    }

    private:
    int jour;
    int mois;
    int annee;
};


int main()
{
    Date day1(4,9,2023);
    Date day2(5,9,2023);
    //bool isEqual = ();
    cout << (day1 == day2) << endl;
}