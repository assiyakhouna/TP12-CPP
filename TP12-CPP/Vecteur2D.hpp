
#ifndef VECTEUR2D_HPP
#define VECTEUR2D_HPP

#include <iostream>
using namespace std;

class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur
    Vecteur2D(double a, double b) {
        x = a;
        y = b;
    }

    // Surcharge de l'operateur +
    Vecteur2D operator+(const Vecteur2D& v) const {
        return Vecteur2D(x + v.x, y + v.y);
    }

    // Methode afficher
    void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

#endif
