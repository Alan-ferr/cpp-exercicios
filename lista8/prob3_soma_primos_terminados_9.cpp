#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    long long i, s;
    cin >> i >> s;

    long long soma = 0;
    for (long long n = i; n <= s; n++) {
        if (n % 10 == 9 && ehPrimo(n)) soma += n;
    }

    cout << soma << endl;
    return 0;
}
