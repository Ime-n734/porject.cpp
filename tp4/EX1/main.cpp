
#include <iostream>
using namespace std;

template <typename T>
void echanger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


template <typename T>
void trier(T tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < taille; j++) {
            if (tableau[j] < tableau[minIndex]) {
                minIndex = j;
            }
        }
        echanger(tableau[i], tableau[minIndex]);
    }
}

// Fonction pour afficher les éléments d'un tableau
template <typename T>
void afficher(T tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

int main() {
    // Tableau d'entiers
    int tableau1[10] = {20, 5, 9, 3, 12, 15, 7, 18, 2, 10};
    cout << "Tableau avant tri : ";
    afficher(tableau1, 10);

    trier(tableau1, 10);

    cout << "Tableau après tri : ";
    afficher(tableau1, 10);


    double tableau2[10] = {2.5, 1.2, 3.7, 0.8, 4.6, 3.1, 5.9, 1.5, 2.3, 4.0};
    cout << "Tableau avant tri : ";
    afficher(tableau2, 10);

    trier(tableau2, 10);

    cout << "Tableau après tri : ";
    afficher(tableau2, 10);

    return 0;
}
