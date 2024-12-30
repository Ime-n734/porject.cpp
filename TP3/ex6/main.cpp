#include <iostream>
#include <vector>
#include "tableaux.h"

int main() {
    std::vector<int> tableau = {5, 3, 8, 1, 4};

    std::cout << "tableau avant tri : ";
    afficher_tableau(tableau);

    trier_tableau(tableau);

    std::cout << "tableau apres tri : ";
    afficher_tableau(tableau);

    return 0;
}
