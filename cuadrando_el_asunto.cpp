#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin >> n;

    if (n<2){

        return 1;
    }

    int suma = 0;

    vector<int> lista(n);

    for (int i = 0; i < n; i++){

        cin >> lista[i];
    }

    for (int i = 0; i < n-1; i++){

        for(int j = i + 1; j < n; j++){

            suma += pow((lista[i]-lista[j]),2);
        }
    }

    cout << suma;

}