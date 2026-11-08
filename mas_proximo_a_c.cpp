#include <iostream>
#include <array>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    array <long long, 6 > operaciones = {
        a * a,
        a * b,
        a + a,
        a + b,
        b * b,
        b + b
    };

    int mas_prox=0;

    for (int i=0; i < operaciones.size(); i++) {

        if (operaciones[i] == c) {
            mas_prox = operaciones[i];
            break;
        }
        if (abs (operaciones[i] - c) < abs (operaciones [i+1] - c)) {

            mas_prox = operaciones[i];

        } else if (abs (operaciones[i] - c) == abs (operaciones [i+1] - c)) {

            if (operaciones[i] < operaciones [i+1]) mas_prox = operaciones[i];

            if (operaciones[i] > operaciones [i+1]) mas_prox = operaciones[i+1];

        } else mas_prox = operaciones [i+1];
    }
    cout << mas_prox << endl;
}