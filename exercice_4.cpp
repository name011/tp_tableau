#include <iostream>
using namespace std;

int main(){
    // début du programme de fusion de deux tableaux
    int n = 2;
    int tab[n], tab2[n], tab3[2*n];
    // remplissage du premier tableau
    for (int i = 0; i<n; i++){
        cout << "entrer un nombre pour le premier tableau : ";
        cin >> tab[i];
    }
        for (int i = 0; i<n; i++){
        cout << "entrer un nombre pour le deuxieme tableau : ";
        cin >> tab2[i];
    }
    // fusion des deux tableaux
    for (int i = 0; i < n; i++){
        tab3[i]=tab[i];
        tab3[i+n]=tab2[i];
    }
    // début de l'affichage du troisieme tableau
    for (int i = 0; i<2*n;i++){
        cout << "dans la "<< i<< " il est y a : "<<tab3[i]<<endl;
    }
    return 0;
}