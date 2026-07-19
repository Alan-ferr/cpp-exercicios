// LISTA 2 - Prob 4 - Calcule o número de diagonais em um polígono convexo com n lados

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n * (n - 3) / 2 << endl;
    return 0;
}
