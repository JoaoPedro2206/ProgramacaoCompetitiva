#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<pair<ll, ll>> lista;
    ll total = 0;

    for (int i = 0 ; i < n ; i++){
        ll a, b; cin >> a >> b;
        if (!lista.empty() && lista.back().first == a){
            lista.back().second ++;
        } else lista.push_back({a, 1});
        if (lista.back().second >= 3 && a != b){
            total += lista.back().second;
            lista.pop_back();
        }
        if (!lista.empty() && lista.back().first == b){
            lista.back().second ++;
        } else lista.push_back({b, 1});
        if (lista.back().second >= 3){
            total += lista.back().second;
            lista.pop_back();
        }
    }

    cout << total << "\n";

    return 0;
}