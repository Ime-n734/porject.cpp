#ifndef TABLEAUX_H
#define TABLEAUX_H

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void afficher_tableau(const std::vector<T>& tableau) {
    for (const auto& elem : tableau) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

template <typename T>
void trier_tableau(std::vector<T>& tableau) {
    std::sort(tableau.begin(), tableau.end());
}

#endif

