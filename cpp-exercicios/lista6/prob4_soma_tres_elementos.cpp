// LISTA 6 - Prob 4 - Soma de três elementos de um conjunto
// Dado um vetor de dimensão n com números inteiros e um número inteiro K,
// verificar se há três elementos no vetor cuja soma seja igual a K

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string linha;
    getline(cin, linha);

    // lê todos os números da primeira linha (o vetor)
    vector<int> v;
    stringstream ss(linha);
    int x;
    while (ss >> x) v.push_back(x);

    int k;
    cin >> k;

    bool achou = false;
    for (size_t i = 0; i < v.size() && !achou; i++) {
        for (size_t j = i + 1; j < v.size() && !achou; j++) {
            for (size_t l = j + 1; l < v.size(); l++) {
                if (v[i] + v[j] + v[l] == k) { achou = true; break; }
            }
        }
    }

    cout << (achou ? "SIM" : "NAO");
    return 0;
}
