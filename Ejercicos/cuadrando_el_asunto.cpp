#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if (n<2){

        return 1;
    }

    long long sum_digitos = 0;
    long long sum_cuadrado = 0;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        sum_digitos += x;
        sum_cuadrado += x * x;
    }

    long long result = n * sum_cuadrado - sum_digitos * sum_digitos;
    cout << result;
    return 0;
}