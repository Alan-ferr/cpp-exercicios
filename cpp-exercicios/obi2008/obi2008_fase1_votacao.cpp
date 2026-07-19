// OBI 2008, nível júnior, fase 1
// Confere o número de votos que coincidem entre o gabarito e a solução de um
// candidato

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, num_certas = 0;
    string gabarito, solucao_candidato;
    cin >> N >> gabarito >> solucao_candidato;

    for (int i = 0; i < N; i++) {
        if (gabarito[i] == solucao_candidato[i]) {
            num_certas++;
        }
    }

    cout << num_certas;
    return 0;
}
