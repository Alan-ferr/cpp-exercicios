// LISTA 6 - Prob 2 - Cardinalidade dos números k-primos gêmeos em um intervalo
// Dados três números inteiros positivos i, k e s, com i < s, determinar a
// cardinalidade do conjunto de pares de primos que diferem por k unidades e
// que pertencem ao intervalo [i,s]

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
    int i, s, k;
    cin >> i >> s >> k;

    int count = 0;
    for (int p = i; p <= s - k; p++) {
        if (primo(p) && primo(p + k)) count++;
    }

    cout << count << endl;
    return 0;
}
