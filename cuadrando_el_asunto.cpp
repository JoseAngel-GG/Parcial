#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 2) {
        cout << 0;
        return 0;
    }

    long long sum = 0;
    long long sumSq = 0;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        sum += x;
        sumSq += x * x;
    }

    long long result = 1LL * n * sumSq - sum * sum;
    cout << result;
    return 0;
}