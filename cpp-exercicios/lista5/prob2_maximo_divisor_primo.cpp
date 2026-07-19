// LISTA 5 - Prob 2 - Máximo divisor primo de um número inteiro positivo

#include <iostream>
using namespace std;

int main() {
    long long n, maior = 1;
    cin >> n;

    for (long long d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            maior = d;
            while (n % d == 0) n /= d;
        }
    }
    if (n > 1) maior = n;

    cout << maior << endl;
    return 0;
}
