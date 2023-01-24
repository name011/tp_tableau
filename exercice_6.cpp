#include <iostream>
using namespace std;

int main(){
    int tab[5], reponse;
    int i = 0;
    do {
    cout <<" Entre une valeur entre 0 et 20 : ";
    cin >> reponse; 
    if (reponse > 20 || reponse < 0){
    cout << "la valeur saisie n'est pas comprise entre 0 et 20"<<endl;
    }
    else { 
        tab[i]=reponse;
        i++;
    }
    }while (i <5);
    int cmpt, drapeau = 0, u = 0;
    cmpt = tab[u];
    cout << "le tableau tab[1] : "<<cmpt<<endl;
    for (u = 0; u<5; u++){
        if (cmpt == tab[u]){
            drapeau ++;
        }
        cout <<"Dans la case "<<u<< " il y a comme valeur : "<< tab[u]<<endl;
        
    }cout << "il y a "<< drapeau<< " nombre "<< cmpt <<endl;
    return 0;
}