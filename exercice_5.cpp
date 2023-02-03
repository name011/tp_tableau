#include <iostream>
using namespace std;

int main(){
    cout << "début du programme : " <<endl;
    int reponse, tab[5], nombre, indice = 0;
    do {
    cout << "1. Ajouter une entier au tableau"
    <<endl <<"2. Afficher le tableau"
    <<endl <<"3. Supprimer le dernier entier du tableau"
    <<endl <<"4. Afficher la dernier note tapée"
    <<endl <<"5. Quittez le programme"<<endl;
        cout << "votre choix : ";cin >> reponse;
        switch (reponse){
            case 1:
            if (indice <= 5){
                cout << "entrer un nombre : ";
                cin >> nombre;
                tab[indice] = nombre;
                indice ++;
            } else {
                cout << "le tableau est plein" <<endl;
            }
                break;
            case 2:
                for (int i=0; i<5; i++){
                    cout << "dans la case " <<i <<" il y a " <<tab[i] <<endl;
                }
                break;
            case 3:
                indice--;
                break;
            case 4:
                cout << "la dernière note tapée est : " <<tab[indice -1] <<endl;
                break;
            case 5:
                cout << "fin du programme" <<endl;
                break;
            default:
                cout << "erreur" <<endl;
                break;
        }
    } while (reponse != 5);
    return 0;
}