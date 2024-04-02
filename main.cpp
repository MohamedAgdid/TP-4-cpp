#include <iostream>
#include "classes.h"

void unCercleDePlus(Dessin const& img) {
 Dessin tmp(img); 
 tmp.ajouteFigure(Cercle(1));
 cout << "Affichage de 'tmp': " << endl;
 tmp.affiche();  }

int main () {
/*Cercle c; 
Triangle T(4,5);
c.affichageDesc(c);
T.affichageDesc(T);*/
Dessin dessin;
dessin.ajouteFigure(Triangle(3,4)); 
dessin.ajouteFigure(Carre(2)); 
dessin.ajouteFigure(Triangle(6,1));
dessin.ajouteFigure(Cercle(12));
cout << endl << "Affichage du dessin : " << endl;
dessin.affiche(); 
cout<<"-----------------------------------"<<endl;
unCercleDePlus(dessin);
/*Le motif pour un comportement imprévisible comme 
une segmentation fault ou un bus error est probablement d
û à une erreur de gestion de la mémoire.*/
return 0;

}
