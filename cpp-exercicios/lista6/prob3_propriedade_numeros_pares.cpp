// LISTA 6 - Prob 3 - Propriedade dos números pares (Conjectura de Goldbach)
// Verifica se todo número par maior que 4 pode ser expresso como soma de dois
// números primos, no intervalo [i,s]

#include <iostream>
using namespace std;

bool primo(int p) {
    if (p < 2) return false;
    for (int i = 2; i * i <= p; i++) {
        if (p % i == 0) return false;
    }
    return true;
}

int main() {
    int i, s;
    cin >> i >> s;

    for (int n = i; n <= s; n += 2) {
        if (n < 4) continue;
        bool achou = false;
        for (int p = 2; p <= n / 2; p++) {
            if (primo(p) && primo(n - p)) { achou = true; break; }
        }
        if (!achou) { cout << "nao"; return 0; }
    }

    cout << "sim";
    return 0;
}
