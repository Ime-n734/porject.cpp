#include "Cercle.h"
#include "Headers/Point.h"
int main() {
    // Cr�ation d'un cercle de rayon 1 et de centre (10, 10)
    Cercle c1(1, 10, 10);
    c1.afficher();

    // Calcul et affichage du p�rim�tre et de la surface
    cout << "P�rim�tre: " << c1.perimetre() << endl;
    cout << "Surface: " << c1.surface() << endl;

    // Doublement du rayon
    c1.setRayon(c1.getRayon() * 2);
    cout << "\nApr�s doublement du rayon:\n";
    cout << "P�rim�tre: " << c1.perimetre() << endl;
    cout << "Surface: " << c1.surface() << endl;

    // D�placement du cercle pour ramener son centre � l'origine
    c1.translateCentre(-10, -10);
    cout << "\nApr�s translation au centre de l'origine:\n";
    c1.afficher();

    // V�rification de l'appartenance des points
    Point p1(1, 1), p2(3, 3);
    cout << "\nAppartenance des points:\n";
    cout << "Point (1, 1) est ";
    cout << (c1.contains(p1) ? "� l'int�rieur" : "� l'ext�rieur") << " du cercle.\n";

    cout << "Point (3, 3) est ";
    cout << (c1.contains(p2) ? "� l'int�rieur" : "� l'ext�rieur") << " du cercle.\n";

    // Test de l'�galit� avec un autre cercle
    Cercle c2(2, 0, 0);
    cout << "\nTest d'�galit� avec un cercle de rayon 2 et centre (0, 0): ";
    cout << (c1.equals(c2) ? "�gaux" : "Diff�rents") << endl;

    return 0;
}

