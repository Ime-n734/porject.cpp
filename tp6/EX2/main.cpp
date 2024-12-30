#include "RobotChasseur.h"
#include <vector>

int main() {

    robotChasseur optimus("Optimus", 2, 3, 25);

    optimus.deplacer(33, 19);
    optimus.afficher();

    std::vector<robot> ennemis = {
        robot("Megatron", 40, 25, 10),
        robot("Starscream", 32, 20, 15),
        robot("Soundwave", 50, 10, 12),
        robot("Bumblebee", 34, 21, 8),
        robot("Ironhide", 36, 19, 14)
    };


    for (auto& ennemi : ennemis) {
        if (optimus.aPortee(ennemi)) {
            optimus.tuer(ennemi);
        }
    }


    optimus.afficher();
    for (const auto& ennemi : ennemis) {
        ennemi.afficher();
    }

    return 0;
}

