#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class robotChasseur : public robot {
public:
    robotChasseur(const std::string& nom, double x, double y, double portee);
    bool aPortee(const robot& autre) const;
    void tuer(robot& autre);
};

#endif

