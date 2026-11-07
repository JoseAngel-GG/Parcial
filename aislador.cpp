#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int suma_capas = 0; 
    int suma_sucesores = 0;

    vector <int> capas_aislador(n);            // array original

    for(int i=0; i < n; i++){

        cin >> capas_aislador[i];     // introducir las capas del aislador

        if (capas_aislador[i]<0){

            return 1;
        }
    }

    sort (capas_aislador.begin(), capas_aislador.end());     //ordenar el vector de manera ascendete

    for (int j = 0; j < n; j++) {           //suma de todas las capas

        suma_capas+=capas_aislador[j];
    }   

    int mitad = n/2;

    for (int k = 0; k < mitad; k++){

        suma_sucesores+=(capas_aislador[n-1-k]-capas_aislador[k]);
    }

    suma_capas+=suma_sucesores;
     
    cout <<suma_capas << endl;

}