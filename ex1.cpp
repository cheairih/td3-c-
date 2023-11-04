#include<iostream>
using namespace std;
class Complex{
    private:
            double reel;
            double imaginaire;
    public:
            Complex(double re,double im){
                reel=re;
                imaginaire=im;
            }
            Complex operator+(const Complex& autre){
                return Complex(reel+autre.reel,imaginaire+autre.imaginaire);
            }
            Complex operator-(const Complex& autre){
                return Complex(reel-autre.reel,imaginaire-autre.imaginaire);
            }
            Complex operator*(const Complex& autre){
                double nouveaureel=(reel*autre.reel)-(imaginaire*autre.imaginaire);
                double nouveauimaginaire=(reel*autre.imaginaire)+(imaginaire*autre.reel);
                return Complex(nouveaureel,nouveauimaginaire);
            }
            void afficher(){
                cout<<"partie reelle:"<<reel<<"partie imaginaire:"<<imaginaire<<endl;
            }
};
int main(){

double reel1,imaginaire1,reel2,imaginaire2;
cout<<"entrer la valeur du premier reel:"<<endl;
cin>>reel1;
cout<<"entrer la valeur du premier imaginaire:"<<endl;
cin>>imaginaire1;
cout<<"entrer la valeur du deuxieme reel:"<<endl;
cin>>reel2;
cout<<"entrer la valeur du deuxieme imaginaire"<<endl;
cin>>imaginaire2;

Complex Complex1(reel1,imaginaire1);
Complex Complex2(reel2,imaginaire2);

Complex sum=Complex1+Complex2;
Complex soustraction=Complex1-Complex2;
Complex produit=Complex1*Complex2;
cout<<"l'addition des deux nombres complexes est:";
sum.afficher();
cout<<"la soustraction des deux nombres complexes est:";
soustraction.afficher();
cout<<"le produit des deux nombres complesxes est:";
produit.afficher();
return 0;
}