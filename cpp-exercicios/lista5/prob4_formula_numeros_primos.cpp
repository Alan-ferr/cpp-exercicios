// LISTA 5 - Prob 4 - Fórmula para números primos
// Para um dado número inteiro não negativo n, determinar o valor de
// f(n) = n^2 + n + 41 e verificar se este valor é primo ou não

#include <iostream>
using namespace std;

bool primo(long long p) {
    if (p < 2) return false;
    for (long long d = 2; d * d <= p; d++) {
        if (p % d == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    long long f = n * n + n + 41;
    cout << f << " " << (primo(f) ? "sim" : "nao") << endl;
    return 0;
}
