#include <iostream>
#include <string>

struct produit {
    std::string type;
    double prix_ht;
    bool solde;
};

double calculer_prix(const produit& p, double taxe_normale = 0.19, double taxe_luxe = 0.25, double remise_solde = 0.20) {
    double taxe = (p.type == "luxe") ? taxe_luxe : taxe_normale;
    double prix_ttc = p.prix_ht * (1 + taxe);
    if (p.solde) {
        prix_ttc *= (1 - remise_solde);
    }
    return prix_ttc;
}

int main() {
    produit p1 = {"normal", 100.0, false};
    produit p2 = {"normal", 100.0, true};
    produit p3 = {"luxe", 200.0, false};
    produit p4 = {"luxe", 200.0, true};

    std::cout << "produit 1 (normal, non solde): " << calculer_prix(p1) << " eur\n";
    std::cout << "produit 2 (normal, solde): " << calculer_prix(p2) << " eur\n";
    std::cout << "produit 3 (luxe, non solde): " << calculer_prix(p3) << " eur\n";
    std::cout << "produit 4 (luxe, solde): " << calculer_prix(p4) << " eur\n";

    return 0;
}

