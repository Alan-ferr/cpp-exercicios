#include <bits/stdc++.h>
using namespace std;

long long somaDivisores(long long n) {
    long long soma = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            long long j = n / i;
            if (i != n) soma += i;
            if (j != i && j != n) soma += j;
        }
    }
    return soma;
}

int main() {
    long long i, s;
    cin >> i >> s;

    for (long long a = i; a <= s; a++) {
        long long b = somaDivisores(a);
        if (b > a && b <= s && somaDivisores(b) == a) {
            cout << a << " " << b << "\n";
        }
    }
    return 0;
}
