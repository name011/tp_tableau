#include <iostream>
using namespace std;

int main(){
    cout <<"début du programme : "<<endl;
    int tab[5], reponse;
    for (int i=0; i<5; i++){
        cout <<"entrer un nombre : ";
        cin >> reponse;
        tab[i] = reponse;
    }
    int nombre;
    cout << "le nombre recherché est : ";cin >> nombre;
    for (int i=0; i <5; i++){
        if (tab[i] == nombre){
            cout << "le nombre " <<nombre <<" est dans la case " <<i <<endl;
        }
        else {
            cout << "le nombre " <<nombre <<" n'est pas dans la case " <<i <<endl;
        }
    }
    return 0;
}