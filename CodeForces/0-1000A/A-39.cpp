#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// --------------------------- APELIDOS DE TIPOS (TYPEDEFS) ---------------------------
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// --------------------------- MACROS ---------------------------
// Loops
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i > (b); --i)
#define trav(a, x) for (auto& a : x)

// Funções de vetores
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair

// Úteis
#define f first
#define s second

// Debug (imprime o nome da variável e seu valor)
#define debug(x) cout << #x << " = " << x << endl;

// --------------------------- CONSTANTES ---------------------------
const ll MOD = 1e9 + 7;      // Módulo para operações de aritmética modular (um primo comum).
const ll INF = 1e18;         // Infinito para long long.
const int INFI = 1e9;        // Infinito para int.
const double PI = acos(-1.0); // Valor de Pi.

// --------------------------- FUNÇÕES AUXILIARES (HELPER FUNCTIONS) ---------------------------

// Maior Divisor Comum
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Mínimo Múltiplo Comum
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Exponenciação Modular (calcula (base^exp) % mod)
ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// --------------------------- LÓGICA DO PROBLEMA ---------------------------

void solve() {
    int n;
    cin >> n;

    cout << n << endl;
}

// --------------------------- FUNÇÃO PRINCIPAL ---------------------------

int main() {
    fast_io();

    ll N;
    cin >> N;

    vll sol(N);
    rep(k, 0, N){
        cin >> sol[k];
    }
    vector<pair<ll,ll>> dup;
    ll mdif = INT_MAX;

    ll dif2 = sol[0] - sol[N-1];
    if(dif2 < 0) {
        dif2 = dif2 * -1;
    } 
    if(mdif > dif2){
        mdif = dif2;
        dup.push_back({N-1, 0});
    }

    rep(i,0,N-1){
        ll dif = (sol[i] - sol[i+1]);
        if(dif < 0){
            dif = dif * -1;
        }
        if(mdif > dif){
            mdif = dif;
            dup.clear();
            dup.push_back({i, i+1});
        } else if(mdif == dif){
            dup.push_back({i, i+1});
        }
    }

    
    cout << dup[0].first + 1 << " " << dup[0].second + 1 << endl;

    return 0;
}
