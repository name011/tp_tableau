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
    //début du programme qui affiche les nombres dans chaque case
    for (int i=0; i<5; i++){
        cout << "dans la case " <<i <<" il y a " <<tab[i] <<endl;
    }
    //début du programme qui affiche les nombres supérieurs à 10
    cout <<"début du programme qui affiche les nombres supérieurs à 10 : "<<endl;
    cout << "les nombres supérieurs à 10 sont : " ;
    for (int i=0; i<5; i++){
        if (tab[i]>=10){
            cout <<tab[i] <<" | " ;
        }
    }
    return 0;
}