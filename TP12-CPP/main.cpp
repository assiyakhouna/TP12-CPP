
#include <iostream>
#include "Vecteur2D.hpp"

using namespace std;

int main() {

    // Creation des deux vecteurs
    Vecteur2D v1(2, 3);
    Vecteur2D v2(4, 5);

    // Addition des vecteurs
    Vecteur2D resultat = v1 + v2;

    // Affichage
    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    cout << "Resultat de l'addition : ";
    resultat.afficher();

    return 0;
}
