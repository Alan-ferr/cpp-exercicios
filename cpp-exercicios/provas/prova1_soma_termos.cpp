// (Em classe) PROVA 1 - Prob 1
// Usa o código do PROBLEMA 1.23 (função totiente de Euler) para calcular a
// SOMA DOS N PRIMEIROS TERMOS terminados em dois desta sequência, onde n é o
// número de termos da sequência.
//
// OBS: código reconstruído a partir de foto de tela com reflexo/distorção
// parcial — revisar contra o original antes de subir, caso algo não bata.

#include <iostream>
using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    int soma = 0;
    for (int j = 1; j <= n; j++) {
        int phi = 0;
        for (int i = 1; i <= j; i++) {
            if (mdc(i, j) == 1) phi++;
        }
        if (phi % 10 == 2) soma += phi;
    }

    cout << soma;
    return 0;
}
