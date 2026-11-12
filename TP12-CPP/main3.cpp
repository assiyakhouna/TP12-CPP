
#include <iostream>
#include "Tableau.hpp"

using namespace std;

int main() {
    int n;

    cout << "Donner la taille du tableau : ";
    cin >> n;

    if (n <= 0) {
        cout << "Taille invalide !" << endl;
        return 1;
    }

    Tableau t(n);

    // Remplissage du tableau
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "] : ";
        cin >> t[i];
    }

    // Affichage du tableau
    cout << "\nContenu du tableau :" << endl;

    for (int i = 0; i < n; i++) {
        cout << "t[" << i << "] = " << t[i] << endl;
    }

    // Test de l'operateur []
    try {
        int indice;

        cout << "\nDonner un indice a consulter : ";
        cin >> indice;

        cout << "Valeur = " << t[indice] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
