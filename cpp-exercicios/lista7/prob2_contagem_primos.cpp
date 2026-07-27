#include <iostream>
#include <cmath>
using namespace std;

bool primo(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cont = 0;

    for (int i = a; i <= b; i++) {
        if (primo(i))
            cont++;
    }

    cout << cont;

    return 0;
}
