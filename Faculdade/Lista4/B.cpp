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
        fast_io();

        string s;
        cin >> s;
        vll dir;
        vll esq;
        ll i = 1;
        for(char c: s){
            if(c == 'l'){
                esq.push_back(i);
            } else {
                dir.push_back(i);
            }
            i++;
        } 

        for(ll n: dir){
            cout << n << endl;
        }
        for(ll j = esq.size()-1; j >= 0; j--){
            cout << esq[j] << endl; 
        }

        return 0;
    }