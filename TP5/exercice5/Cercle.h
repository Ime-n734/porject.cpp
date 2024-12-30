#ifndef CERCLE_H
#define CERCLE_H
#include "Headers/Point.h"
#include <cmath>

class Cercle {
private:
    double rayon;
    Point centre;

public:
    // Constructeurs
    Cercle(double r, const Point& c) : rayon(r), centre(c) {}
    Cercle(double r, double x, double y) : rayon(r), centre(Point(x, y)) {}

    // Accesseurs
    double getRayon() const { return rayon; }
    Point getCentre() const { return centre; }

    // Mutateurs
    void setRayon(double r) { rayon = r; }
    void setCentre(const Point& c) { centre = c; }

    // Translation du centre
    void translateCentre(double dx, double dy) {
        centre.translate(dx, dy);
    }

    // Calcul de la surface
    double surface() const {
        return M_PI * rayon * rayon;
    }

    // Calcul du périmètre
    double perimetre() const {
        return 2 * M_PI * rayon;
    }

    // Test d'égalité avec un autre cercle
    bool equals(const Cercle& other) const {
        return (rayon == other.rayon && centre.equals(other.centre));
    }

    // Vérification de l'appartenance d'un point au cercle
    bool contains(const Point& p) const {
        double distance = sqrt(pow(p.getX() - centre.getX(), 2) + pow(p.getY() - centre.getY(), 2));
        return distance <= rayon;
    }

    // Affichage des caractéristiques du cercle
    void afficher() const {
        cout << "Cercle de rayon " << rayon << " et de centre ";
        centre.afficher();
        cout << endl;
    }
};

#endif // CERCLE_H


