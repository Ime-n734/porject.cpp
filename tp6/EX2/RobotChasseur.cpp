 #include "RobotChasseur.h"

robotChasseur::robotChasseur(const std::string& nom, double x, double y, double portee)
    : robot(nom, x, y, portee) {}

bool robotChasseur::aPortee(const robot& autre) const {
    return distance(autre) <= portee && !autre.getStatut();
}

void robotChasseur::tuer(robot& autre) {
    if (aPortee(autre)) {
        autre.mourir();
        std::cout << "Le robot " << autre.getNom() << " a ete tue par " << nom << "\n";
    }
}

