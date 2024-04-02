#include <iostream>
#include "Figure.h"
using namespace std;
class Carre : public Figure {
private:
    double cote;

public:
    Carre(double c) : cote(c) {
        cout<<"Constructeur Carre"<<endl;
    }
    Carre(const Carre& c):Carre(c.cote){
        cout<<"Constructeur par copie Carre"<<endl;
    }
    void affiche() const {
        cout << "Carré de côté " << cote << endl;
    }

    Figure* copie() const{
        return new Carre(*this);
    }
    ~Carre(){
        cout << "Destructeur Carre" << endl;
    }
};