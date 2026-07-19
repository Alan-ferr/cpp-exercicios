// LISTA 2 - Prob 3 - Dados dois pontos, calcule a distância entre eles

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << fixed << setprecision(3) << d << endl;
    return 0;
}
