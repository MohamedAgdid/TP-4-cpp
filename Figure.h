#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

using namespace std;

class Figure {
public:
    virtual void affiche() const = 0;
    virtual Figure* copie() const = 0;
    virtual ~Figure() {
        cout << "Destructeur Figure" << endl;
    }
};

#endif // FIGURE_H
