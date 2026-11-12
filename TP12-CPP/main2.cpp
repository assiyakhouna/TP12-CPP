
#include <iostream>
#include "Date.hpp"

using namespace std;

int main() {

    // Creation des dates
    Date d1(12, 11, 2026);
    Date d2(12, 11, 2026);
    Date d3(15, 12, 2026);

    // Comparaison avec ==
    if (d1 == d2) {
        cout << "Les deux dates sont identiques." << endl;
    }
    else {
        cout << "Les deux dates sont differentes." << endl;
    }

    // Comparaison avec !=
    if (d1 != d3) {
        cout << "Les deux dates sont differentes." << endl;
    }
    else {
        cout << "Les deux dates sont identiques." << endl;
    }

    return 0;
}
