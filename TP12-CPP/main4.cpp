
#include <iostream>
#include "Produit.hpp"

using namespace std;

int main() {

    // Creation des produits
    Produit p1("Ordinateur", 5500, 3);
    Produit p2("Souris", 120, 10);

    // Affichage avec l'operateur <<
    cout << "=== Produit 1 ===" << endl;
    cout << p1 << endl;

    cout << "=== Produit 2 ===" << endl;
    cout << p2 << endl;

    return 0;
}
