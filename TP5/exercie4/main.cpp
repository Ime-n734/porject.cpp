#include <iostream>
#include <cmath>
using namespace std;

class Complexe {
private:
    double Re;
    double Img;

public:

    Complexe(double re = 0.0, double img = 0.0) : Re(re), Img(img) {}


    void affiche() const {

       cout << Re << (Img >= 0 ? "+" : "") << Img << "i" << endl;
    }


    double module() const {
        return std::sqrt(Re * Re + Img * Img);
    }


    Complexe conjugue() const {
        return Complexe(Re, -Img);
    }


    Complexe operator+(const Complexe& autre) const {
        return Complexe(Re + autre.Re, Img + autre.Img);
    }


    friend Complexe operator+(const Complexe& c, double d);

    friend Complexe operator+(double d, const Complexe& c);

      Complexe operator*(const Complexe& autre) const {
        return Complexe(Re * autre.Re - Img * autre.Img, Re * autre.Img + Img * autre.Re);
    }

    friend Complexe operator*(const Complexe& c, double d);

    friend Complexe operator*(double d, const Complexe& c);


    Complexe operator-(const Complexe& autre) const {
        return Complexe(Re - autre.Re, Img - autre.Img);
    }

    friend Complexe operator-(const Complexe& c, double d);

    friend Complexe operator-(double d, const Complexe& c);
};


Complexe operator+(const Complexe& c, double d) {
    return Complexe(c.Re + d, c.Img);
}

Complexe operator+(double d, const Complexe& c) {
    return Complexe(d + c.Re, c.Img);
}

Complexe operator*(const Complexe& c, double d) {
    return Complexe(c.Re * d, c.Img*d);
}

Complexe operator*(double d, const Complexe& c) {
    return Complexe(d*c.Re, d*c.Img);
}

Complexe operator-(const Complexe& c, double d) {
    return Complexe(c.Re - d, c.Img);
}

Complexe operator-(double d, const Complexe& c) {
    return Complexe(d - c.Re, -c.Img);
}

int main() {
    Complexe c1(3, 4);
    Complexe c2(1, -2);
    double d = 2.5;

   cout << "c1 = "; c1.affiche();
   cout << "c2 = "; c2.affiche();
   cout << "d = " << d << endl;

   cout << "c1 + c2 = "; (c1 + c2).affiche();
   cout << "c1 + d = "; (c1 + d).affiche();
   cout << "d + c1 = "; (d + c1).affiche();

    cout << "c1 * c2 = "; (c1 * c2).affiche();
    cout << "c1 * d = "; (c1 * d).affiche();
    cout << "d * c1 = "; (d * c1).affiche();

    cout << "c1 - c2 = "; (c1 - c2).affiche();
    cout << "c1 - d = "; (c1 - d).affiche();
    cout << "d - c1 = "; (d - c1).affiche();

    cout << "|c1| = " << c1.module() << endl;
    cout << "conj(c1) = "; c1.conjugue().affiche();

    return 0;
}
