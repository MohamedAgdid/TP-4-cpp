#include "Forme.h"
#include "Figure.h"
#include <iostream>
#include <cmath>
using namespace std;

class Triangle : public  Forme, public Figure {
  private:
    int base;
    int hauteur;
  public:
    Triangle(int b=0, int h=0) : base(b), hauteur(h) {
        cout<<"Constructeur Triangle"<<endl;
    }
    Triangle(const Triangle& T):Triangle(T.base,T.hauteur){
        cout<<"Constructeur par copie Triangle"<<endl;
    }

    void description() {
        cout << "Ceci est un Triangle." << endl;
    }

    double aire() const {
        return (hauteur * base) / 2;
    }

    void affiche() const{
        cout << "Triangle de base " << base << " et de hauteur " << hauteur << endl;
    }

    Figure* copie() const{
        return new Triangle(*this);
    }
    ~Triangle(){
        cout << "Destructeur Triangle" << endl;
    }
};
