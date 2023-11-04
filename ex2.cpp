#include <iostream>
#include <list>

using namespace std;

// Function to display the elements in a list
void afficherListe(const list<int>& liste) {
    for (int element : liste) {
        cout << element << " ";
    }
    cout << endl;
}

// Bubble sort for lists
void triABulles(list<int>& liste) {
    int n = liste.size();
    for (int i = 0; i < n - 1; i++) {
        auto current = liste.begin();
        auto next = std::next(current);
        for (int j = 0; j < n - i - 1; j++) {
            if (*current > *next) {
                swap(*current, *next);
            }
            current = next;
            ++next;
        }
    }
}

// Selection sort for lists
void triParSelection(list<int>& liste) {
    auto current = liste.begin();
    int n = liste.size();
    for (int i = 0; i < n - 1; i++) {
        auto minElement = current;
        auto next = ::next(current);
        for (int j = i + 1; j < n; j++) {
            if (*next < *minElement) {
                minElement = next;
            }
            next = ::next(next);
        }
        swap(*current, *minElement);
        current = ::next(current);
    }
}

// Insertion sort for lists
void triParInsertion(list<int>& liste) {
    auto current = ::next(liste.begin());
    auto sortedEnd = liste.begin();
    int n = liste.size();
    for (int i = 1; i < n; i++) {
        int cle = *current;
        auto j = current;
        while (j != sortedEnd && *::prev(j) > cle) {
            *j = *::prev(j);
            --j;
        }
        *j = cle;
        current = ::next(current);
        sortedEnd = ::next(sortedEnd);
    }
}

int main() {
    list<int> liste;
    int n;

    cout << "Entrez le nombre d'entiers : ";
    cin >> n;

    cout << "Entrez les entiers : ";
    for (int i = 0; i < n; i++) {
        int entier;
        cin >> entier;
        liste.push_back(entier);
    }

    // Afficher la liste non triée
    cout << "Liste non triée : ";
    afficherListe(liste);

    // Tri à bulles
    list<int> listeTrieeBulles = liste;
    triABulles(listeTrieeBulles);
    cout << "Tri à bulles : ";
    afficherListe(listeTrieeBulles);

    // Tri par sélection
    list<int> listeTrieeSelection = liste;
    triParSelection(listeTrieeSelection);
    cout << "Tri par sélection : ";
    afficherListe(listeTrieeSelection);

    // Tri par insertion
    list<int> listeTrieeInsertion = liste;
    triParInsertion(listeTrieeInsertion);
    cout << "Tri par insertion : ";
    afficherListe(listeTrieeInsertion);

    return 0;
}

