#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){
        ll n, c; cin >> n >> c;
        ll moedas = 0;
        vector<ll> lista(n);
        for (int i = 0 ; i < n ; ++i) cin >> lista[i];
        sort(lista.begin(), lista.end());
        ll idx = -1;
        for (int i = 0 ; i < n ; ++i){
            if (lista[i] > c) idx = i-1;
        }
        moedas += n-1-idx;
        ll mul = 1;
        if (idx != -1){
            for (int j = idx ; j >= 0 ; --j){
                if (lista[j] <= c) mul= 2;
                else moedas ++;
            }
        }
        cout << moedas << "\n";
    }

    return 0;
}