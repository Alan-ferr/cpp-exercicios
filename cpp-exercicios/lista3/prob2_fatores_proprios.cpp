// LISTA 3 - Prob 2 - Determina o número de fatores próprios (divisores, exceto o
// próprio número e 1) de um dado número inteiro positivo

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
