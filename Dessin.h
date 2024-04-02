#include <iostream>
#include <vector>
using namespace std;
#include "Figure.h"
class Dessin {
    vector<Figure*> figures;

    public:
      /* template<typename T>
      void ajouteFigure(const T& x) {  
        figures.push_back(new T(x));
        }  */

        /*void ajouteFigure(Figure* figure) {
        figures.push_back(figure);
       } */
       void ajouteFigure(const Figure& fig) {
        figures.push_back(fig.copie()); }

      void affiche() const {
        vector<Figure*>::const_iterator it;
        for (it = figures.begin(); it != figures.end(); it++) {
            (*it)->affiche();
        }

    }
    ~Dessin() {
    for (auto& figure : figures) {
        delete figure;
    }
    cout << "Destructeur Dessin" << endl;
    }
    
};