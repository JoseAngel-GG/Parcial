#include <iostream>
using namespace std;

int main() {

    int a, b ,c;
    cin >> a >> b >> c;
    
    if (a == b && a == c) {                    //si a, b, c son iguales
        cout << 3;
        return 0;
    }

    if (a == b && a != c) {
        cout << 2;
        return 0;
    }

    if (a == c && a != b) {
        cout << 2;
        return 0;
    }

    if (b == c && b != a) {
        cout << 2;
        return 0;
    }

    if (a != b && b != c) {                   //si a, b, c son distintos
        cout << 1;
        return 0;
    }

}