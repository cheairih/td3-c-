//Il y a un problème car le type char est utilisé pour instancier la classe point, mais les valeurs 60 et 65 sont des entiers (int).
 //Cela provoque une conversion implicite des entiers en char, ce qui ne donne pas les résultats attendus.
 template <class T>
class point
{
    T x, y; // coordonnees

public:
    point(T abs, T ord) { x = abs; y = ord; }
    void affiche() {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};
