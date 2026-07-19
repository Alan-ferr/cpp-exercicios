// LISTA 3 - Prob 4 - Determine os números primos pertencentes a um dado intervalo [i,s]

#include <iostream>
using namespace std;

bool primo(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int i, s;
    cin >> i >> s;

    for (int x = i; x <= s; x++) {
        if (primo(x)) {
            cout << x << " ";
        }
    }
    cout << endl;
    return 0;
}
