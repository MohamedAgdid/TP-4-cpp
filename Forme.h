#include <iostream>
using namespace std;
#ifndef FORME_H
#define FORME_H
class Forme{
    public:
    virtual void description(){
       cout<<"Ceci est une forme !"<<endl;
    }
    virtual double aire() const = 0 ;
    void affichageDesc(Forme& f){
        f.description();
        cout<<f.aire()<<endl;
    }
    virtual ~Forme() {}
};
#endif