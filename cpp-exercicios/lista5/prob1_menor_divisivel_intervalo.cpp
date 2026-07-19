// LISTA 5 - Prob 1 - Menor número inteiro divisível por todos os inteiros no
// intervalo [i,s]

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long i, s, resultado;
    cin >> i >> s;

    resultado = i;
    for (long long k = i + 1; k <= s; k++) {
        resultado = resultado / __gcd(resultado, k) * k;
    }

    cout << resultado << endl;
    return 0;
}
