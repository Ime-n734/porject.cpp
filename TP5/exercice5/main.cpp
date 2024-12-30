#include "Cercle.h"
#include "Headers/Point.h"
int main() {
    // Création d'un cercle de rayon 1 et de centre (10, 10)
    Cercle c1(1, 10, 10);
    c1.afficher();

    // Calcul et affichage du périmètre et de la surface
    cout << "Périmètre: " << c1.perimetre() << endl;
    cout << "Surface: " << c1.surface() << endl;

    // Doublement du rayon
    c1.setRayon(c1.getRayon() * 2);
    cout << "\nAprès doublement du rayon:\n";
    cout << "Périmètre: " << c1.perimetre() << endl;
    cout << "Surface: " << c1.surface() << endl;

    // Déplacement du cercle pour ramener son centre à l'origine
    c1.translateCentre(-10, -10);
    cout << "\nAprès translation au centre de l'origine:\n";
    c1.afficher();

    // Vérification de l'appartenance des points
    Point p1(1, 1), p2(3, 3);
    cout << "\nAppartenance des points:\n";
    cout << "Point (1, 1) est ";
    cout << (c1.contains(p1) ? "à l'intérieur" : "à l'extérieur") << " du cercle.\n";

    cout << "Point (3, 3) est ";
    cout << (c1.contains(p2) ? "à l'intérieur" : "à l'extérieur") << " du cercle.\n";

    // Test de l'égalité avec un autre cercle
    Cercle c2(2, 0, 0);
    cout << "\nTest d'égalité avec un cercle de rayon 2 et centre (0, 0): ";
    cout << (c1.equals(c2) ? "Égaux" : "Différents") << endl;

    return 0;
}

