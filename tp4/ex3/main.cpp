#include <iostream>
#include <vector>
#include <functional>

void appliquerFiltre(const std::vector<int>& vec, std::function<void(int)> filtre) {
    for (const int& e : vec) {
        filtre(e);
    }
}

int main() {

    std::vector<int> tab{ -2, 3, -33, 7, 99, 6, 2, -39 };


    std::cout << "************************\n";
    std::cout << "* 1. Afficher positif *\n";
    std::cout << "* 2. Afficher negatif *\n";
    std::cout << "* 3. Afficher superieur a un seuil *\n";
    std::cout << "************************\n";
    std::cout << "Entrez votre choix:\n";

    int choix;
    std::cin >> choix;

    switch (choix) {
        case 1: {

            std::cout << "Valeurs positives : ";
            appliquerFiltre(tab, [](int x) {
                if (x >= 0) {
                    std::cout << x << "\t";
                }
            });
            break;
        }
        case 2: {

            std::cout << "Valeurs négatives : ";
            appliquerFiltre(tab, [](int x) {
                if (x < 0) {
                    std::cout << x << "\t";
                }
            });
            break;
        }
        case 3: {

            int seuil;
            std::cout << "Donner le seuil : ";
            std::cin >> seuil;


            std::cout << "Valeurs superieures a " << seuil << " : ";
            appliquerFiltre(tab, [seuil](int x) {
                if (x > seuil) {
                    std::cout << x << "\t";
                }
            });
            break;
        }
        default:
            std::cout << "Choix invalide.\n";
            break;
    }

    return 0;
}

