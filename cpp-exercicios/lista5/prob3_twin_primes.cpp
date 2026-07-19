// LISTA 5 - Prob 3 - Twin Primes
// Dados dois números inteiros positivos i e s, com i < s, determinar a
// cardinalidade do conjunto cujos elementos são pares de primos que diferem
// por 2 e que pertencem ao intervalo [i,s]

#include <iostream>
using namespace std;

bool primo(int p) {
    if (p < 2) return false;
    for (int d = 2; d * d <= p; d++) {
        if (p % d == 0) return false;
    }
    return true;
}

int main() {
    int i, s, count = 0;
    cin >> i >> s;

    for (int p = i; p <= s - 2; p++) {
        if (primo(p) && primo(p + 2)) count++;
    }

    cout << count << endl;
    return 0;
}
