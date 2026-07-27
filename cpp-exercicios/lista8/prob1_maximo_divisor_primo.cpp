#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long maior = 1;
    long long temp = n;

    for (long long i = 2; i * i <= n; i++) {
        while (temp % i == 0) {
            maior = i;
            temp /= i;
        }
    }
    if (temp > 1 && temp != n) maior = temp;

    cout << maior << endl;
    return 0;
}
