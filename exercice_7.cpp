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

    //trie du tableau du plus grand au plus petit
    int temp;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (tab[i] > tab[j]){
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    //affichage du tableau
    for (int i=0; i<5; i++){
        cout << "dans la case " <<i <<" il y a " <<tab[i] <<endl;
    }
        return 0;
}