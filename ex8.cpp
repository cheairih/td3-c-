#include <iostream>

using namespace std;

template <typename T>
T carre(const T& valeur) {
    return valeur * valeur;
}

int main() {
    int entier = 5;
    double flottant = 2.5;

    int carreEntier = carre(entier);
    double carreFlottant = carre(flottant);

    cout << "Le carré de l'entier " << entier << " est : " << carreEntier << endl;
    cout << "Le carré du flottant " << flottant << " est : " << carreFlottant << endl;

    return 0;
}
