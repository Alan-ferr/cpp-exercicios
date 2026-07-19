// OBI 2008, nível júnior, fase 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P, X, Y, num = 0;
    cin >> N >> P;

    for (int i = 1; i <= N; i++) {
        cin >> X >> Y;
        if (X * Y >= P) num++;
    }

    cout << num;
    return 0;
}
