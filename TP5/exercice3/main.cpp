#include <iostream>
#include <cmath>
#include "point .h"

using namespace std;


point::point() : x(0), y(0) {}

point::point(float x, float y) : x(x), y(y) {}

point::point(const point& p) : x(p.x), y(p.y) {}

void point::setPoint(float x, float y) {
    this->x = x;
    this->y = y;
}

void point::affiche() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

bool comparer(const point& p1, const point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

float distance(const point& p1, const point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

point milieu(const point& p1, const point& p2) {
    return point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}


int main() {
    point p2(5, 2);
    cout << "Coordonnées du point 1 : " << endl;
    float x, y;
    cout << "donner x:" << endl;
    cin >> x;
    cout << "donner y:" << endl;
    cin >> y;

    point p1;
    p1.setPoint(x, y);
    p1.affiche();
    cout << "Coordonnées du point 2 : ";
    p2.affiche();

    cout << "Les deux points sont identiques ? "
         << (comparer(p1, p2) ? "Oui" : "Non") << endl;

    cout << "Distance entre les deux points : "
         << distance(p1, p2) << endl;

    point pMilieu = milieu(p1, p2);
    cout << "Milieu des deux points : ";
    pMilieu.affiche();

    return 0;
}
