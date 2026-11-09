#include <iostream>
using namespace std;

int main() {

    int n;                                                  //cantidad de invitados
    cin>> n;

    int circulo [n];
    int semillas=0;

    for (int i=0; i<n; i++) {                               //pide el # del papel de cada invitado
        cin >> circulo [i];
    }
    
    cout << endl;

    for (int i=0; i<n; i++) {                               //toma el numero de cada invitado y lo compara con todo los demas, con excepcion de el mismo
        for (int j=0; j<n; j++) {
            if (&circulo [j] == &circulo [i]) continue;     //el nombre de la casilla con & delante, se refiere a la casilla (posicion), no al valor que contiene
            if (circulo [i] % circulo [j] == 0) semillas++;
        }
        cout << semillas << endl;
        semillas = 0;                                       //tras imprimir las semillas del invitado i, reinicia el contador a 0 para pasar al proximo
    }

}