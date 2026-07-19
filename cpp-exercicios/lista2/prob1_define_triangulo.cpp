// LISTA 2 - Prob 1 - Define um triângulo
// Verifica se três números reais podem corresponder aos lados de um triângulo

#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;

    return 0;
}
