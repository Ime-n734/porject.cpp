#include <iostream>
#include <string>
#include <unordered_map>

struct ville {
    double latitude;
    double longitude;
};

void ajouter_ville(std::unordered_map<std::string, ville>& villes, const std::string& nom, double latitude, double longitude) {
    villes[nom] = {latitude, longitude};
}

void afficher_position(const std::unordered_map<std::string, ville>& villes, const std::string& nom) {
    auto it = villes.find(nom);
    if (it != villes.end()) {
        std::cout << "position de " << nom << " : (" << it->second.latitude << ", " << it->second.longitude << ")\n";
    } else {
        std::cout << "ville non trouvee\n";
    }
}

int main() {
    std::unordered_map<std::string, ville> villes;
    ajouter_ville(villes, "tunis", 36.8065, 10.1815);
    ajouter_ville(villes, "sfax", 34.7406, 10.7603);
    ajouter_ville(villes, "sousse", 35.8256, 10.63699);

    afficher_position(villes, "sfax");
    afficher_position(villes, "gabes");

    return 0;
}
