#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

struct Personne {
    string nom;
    string prenom;
    int age;
};

// Fonction pour afficher les informations d'une personne
void afficherPersonne(const Personne& personne) {
    cout << "Nom: " << personne.nom << ", Prénom: " << personne.prenom << ", Âge: " << personne.age << endl;
}

// Fonction pour comparer deux personnes pour le tri
bool comparerPersonnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.nom == personne2.nom) {
        return personne1.prenom < personne2.prenom;
    }
    return personne1.nom < personne2.nom;
}

int main() {
    list<Personne> listePersonnes;
    int n;

    cout << "Entrez le nombre de personnes : ";
    cin >> n;

    cin.ignore(); // Ignorer le saut de ligne après la saisie de 'n'

    cout << "Entrez les informations des personnes (nom, prénom, âge) :" << endl;
    for (int i = 0; i < n; i++) {
        Personne personne;
        cout << "Personne " << i + 1 << " : " << endl;
        cout << "Nom : ";
        getline(cin, personne.nom);
        cout << "Prénom : ";
        getline(cin, personne.prenom);
        cout << "Âge : ";
        cin >> personne.age;
        cin.ignore(); // Ignorer le saut de ligne après la saisie de l'âge

        listePersonnes.push_back(personne);
    }

    // Trier la liste de personnes
    listePersonnes.sort(comparerPersonnes);

    // Afficher la liste triée
    cout << "Liste triée par nom et prénom : " << endl;
    for (const Personne& personne : listePersonnes) {
        afficherPersonne(personne);
    }

    return 0;
}
