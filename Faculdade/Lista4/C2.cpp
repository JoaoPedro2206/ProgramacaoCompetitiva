#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>


using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); i--)


int main() {
    ll N;
    cin >> N;
    queue<pair<ll,ll>> cil;
    while(N--){
        ll op;
        cin >> op;
        if(op == 1){
            ll x,c;
            cin >> x >> c;
            cil.push({x,c});
        } else {
            ll c;
            ll soma = 0;
            cin >> c;
            while (c > 0 && !cil.empty()) {
                ll val = cil.front().first;
                ll qtd = cil.front().second;
                ll remove = min(c, qtd);

                soma = soma + (remove * val);
                c -= remove;
                cil.front().second -= remove;
                if (cil.front().second == 0) {
                    cil.pop();
                }
            }
            cout << soma << endl;
        }
    }
    return 0;
}