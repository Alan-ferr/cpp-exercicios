// LISTA 3 - Prob 1 - Área de um trapézio

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double base1, base2, altura;
    cin >> base1 >> base2 >> altura;

    double area = (1.0 / 2.0) * (base1 + base2) * altura;

    cout << fixed << setprecision(2) << area << endl;
    return 0;
}
