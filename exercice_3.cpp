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
    // sortie du nombre le plus grand
    int max = tab[0];
    for (int i=0; i<5; i++){
        if (tab[i] > max){
            cout << "le nombre le plus grand est : " <<tab[i] <<endl;
        }
    }
    return 0;
}