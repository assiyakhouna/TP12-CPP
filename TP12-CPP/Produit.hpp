
#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>

using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    // Constructeur
    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    // Surcharge de l'operateur <<
    friend ostream& operator<<(ostream& os, const Produit& p) {
        os << "Nom : " << p.nom << endl;
        os << "Prix : " << p.prix << " DH" << endl;
        os << "Quantite : " << p.quantite << endl;

        return os;
    }
};

#endif
