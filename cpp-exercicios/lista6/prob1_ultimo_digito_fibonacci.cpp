// LISTA 6 - Prob 1 - Último dígito de um número da sequência de Fibonacci
// f(0)=0, f(1)=1, f(2)=1, f(n)=f(n-1)+f(n-2) para n>=3

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) cout << 0;
    else if (n == 1 || n == 2) cout << 1;
    else {
        int a = 0, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = (a + b) % 10;
            a = b;
            b = c;
        }
        cout << b;
    }

    return 0;
}
