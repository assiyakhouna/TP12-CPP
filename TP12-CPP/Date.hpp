
#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:

    // Constructeur
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de ==
    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de !=
    bool operator!=(const Date& d) const {
        return !(*this == d);
    }
};

#endif
