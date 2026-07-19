// LISTA 2 - Prob 2 - Calcular a área de um triângulo usando a fórmula de Heron

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << fixed << setprecision(3) << area << endl;
    return 0;
}
