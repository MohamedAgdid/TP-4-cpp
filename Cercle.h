#include "Forme.h"
#include "Figure.h"
#include <cmath>
class Cercle: public  Figure,public Forme{
    private:
      double r;
    public:
    Cercle(int rr=0):r(rr){
        cout<<"Constructeur Cercle"<<endl;
    }
    Cercle(const Cercle& c):Cercle(c.r){
        cout<<"Constructeur par copie Cercle"<<endl;
    }
    void description(){
        cout<<"Ceci est un cercle."<<endl;
    }
    double aire() const {
        return M_PI*r*r;
    }
    Figure* copie() const {
        return new Cercle(*this);
        
    }
    void affiche() const{
        cout << "Cercle de centre " << r<< endl;
    }
    ~Cercle(){
        cout << "Destructeur Cercle" << endl;
    }
    
};