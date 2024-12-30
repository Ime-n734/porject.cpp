#include <iostream>


class vecteur {
protected:
    double x, y;

public:

    vecteur() : x(0), y(0) {}


    vecteur(double x, double y) : x(x), y(y) {}


    void afficher() const {
        std::cout << "(" << x << " , " << y << ")\n";
    }


    void deplacer(double dx, double dy) {
        x += dx;
        y += dy;
    }
};


class vecteur3d : public vecteur {
private:
    double z;

public:

    vecteur3d() : vecteur(), z(0) {}


    vecteur3d(double x, double y, double z) : vecteur(x, y), z(z) {}


    void afficher() const {
        std::cout << "(" << x << " , " << y << " , " << z << ")\n";
    }


    void deplacer(double dx, double dy, double dz) {
        vecteur::deplacer(dx, dy);
        z += dz;
    }
};


int main() {

    vecteur v1;
    std::cout << "Vecteur nul : ";
    v1.afficher();


    v1.deplacer(3.5, 4.5);
    std::cout << "Vecteur apres deplacement : ";
    v1.afficher();


    vecteur3d* v3 = new vecteur3d(1.0, 2.0, 3.0);
    std::cout << "Vecteur3D : ";
    v3->afficher();


    v3->deplacer(1.0, -1.0, 2.0);
    std::cout << "Vecteur3D apres deplacement : ";
    v3->afficher();

    delete v3;

    return 0;
}

