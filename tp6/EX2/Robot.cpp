#include "Robot.h"

robot::robot(const std::string& nom, double x, double y, double portee)
    : nom(nom), x(x), y(y), portee(portee), estMort(false) {}

void robot::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}

void robot::afficher() const {
    std::cout << "Nom: " << nom << ", Position: (" << x << ", " << y
              << "), Portee: " << portee
              << ", Statut: " << (estMort ? "Mort" : "Vivant") << "\n";
}

bool robot::getStatut() const {
    return estMort;
}

const std::string& robot::getNom() const {
    return nom;
}

double robot::distance(const robot& autre) const {
    return std::sqrt(std::pow(x - autre.x, 2) + std::pow(y - autre.y, 2));
}

void robot::mourir() {
    estMort = true;
}

