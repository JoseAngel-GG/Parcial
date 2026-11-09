#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    array<long long, 6> operaciones = {
        a * a,
        a * b,
        a + a,
        a + b,
        b * b,
        b + b
    };

    long long mas_prox = operaciones[0];
    long long menor_diferencia = abs(operaciones[0] - c);

    for (size_t i = 1; i < operaciones.size(); i++) {
        
        long long diferencia_actual = abs(operaciones[i] - c);

        if (diferencia_actual < menor_diferencia) {
            menor_diferencia = diferencia_actual;
            mas_prox = operaciones[i];
        } 

        else if (diferencia_actual == menor_diferencia) {
            if (operaciones[i] < mas_prox) {
                mas_prox = operaciones[i];
            }
        }

        if (menor_diferencia == 0) {
            break;
        }
    }

    cout << mas_prox << endl;
    return 0;
}