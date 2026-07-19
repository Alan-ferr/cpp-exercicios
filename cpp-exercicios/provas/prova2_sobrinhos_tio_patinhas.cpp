// (Em classe) PROVA 2 - Idades dos sobrinhos do Tio Patinhas
// Dadas as idades de Huguinho, Zezinho e Luisinho, imprime o nome do sobrinho
// mais novo (em minúsculas)

#include <iostream>
using namespace std;

int main() {
    int H, Z, L;
    cin >> H >> Z >> L;

    if (H < Z && H < L) cout << "huguinho";
    else if (Z < H && Z < L) cout << "zuzinho";
    else cout << "luisinho";

    return 0;
}
