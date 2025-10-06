#include <bits/stdc++.h>
using namespace std;

bool sol;


void busca_reversa(int k, long long x) {
    if (sol) {
        return;
    }

    if (k == 0) {
        cout << x << endl;
        sol = true;
        return;
    }

    if (x > 1 && (x - 1) % 3 == 0) {
        long long prexXI = (x - 1) / 3;

        if (prexXI % 2 != 0) {
            busca_reversa(k - 1, prexXI);
        }
    }
    if(sol){
        return;
    }
    busca_reversa(k - 1, x * 2);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int k;
        long long x;
        cin >> k >> x;
        sol = false;
        busca_reversa(k, x);
    }
    return 0;
}