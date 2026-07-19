// LISTA 4 - Prob 3 - Soma dos números primos terminados em 7 e pertencentes ao
// intervalo [i,s]

#include <iostream>
using namespace std;

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int i, s;
    cin >> i >> s;

    long long soma = 0;
    for (int n = i; n <= s; n++) {
        if (n % 10 == 7 && ehPrimo(n)) {
            soma += n;
        }
    }

    cout << soma << endl;
    return 0;
}
