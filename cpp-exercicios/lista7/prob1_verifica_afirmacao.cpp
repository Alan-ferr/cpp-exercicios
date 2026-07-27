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
    int s, t;
    cin >> s >> t;

    for (int n = s; n <= t; n++) {
        if (n % 2 == 0) {
            bool encontrou = false;

            for (int i = 2; i <= n / 2; i++) {
                if (primo(i) and primo(n - i)) {
                    encontrou = true;
                    break;
                }
            }
            if (!encontrou) {
                cout << "nao";
                return 0;
            }
        }
    }

    cout << "sim";

    return 0;
}
