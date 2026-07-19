// LISTA 3 - Prob 3 - Determinar os números perfeitos em um dado intervalo [i,s]

#include <iostream>
using namespace std;

bool perfeito(int x) {
    int soma = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            soma += i;
        }
    }
    return soma == x;
}

int main() {
    int i, s;
    cin >> i >> s;

    int cont = 0;
    for (int x = i; x <= s; x++) {
        if (perfeito(x)) {
            cont++;
        }
    }

    cout << cont << endl;
    return 0;
}
