#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <iostream>
#include <cmath>

class robot {
protected:
    std::string nom;
    double x, y;
    double portee;
    bool estMort;

public:
    robot(const std::string& nom, double x, double y, double portee);
    void deplacer(double dx, double dy);
    virtual void afficher() const;
    bool getStatut() const;
    const std::string& getNom() const;
    double distance(const robot& autre) const;
    void mourir();
};

#endif

