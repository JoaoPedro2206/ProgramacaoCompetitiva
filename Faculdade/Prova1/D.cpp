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
    ll h,w,k;
    cin >> h >> w >> k;
    vector<vector<ll>> ma(h, vector<ll>(w));
    vector<vector<ll>> mb(h, vector<ll>(w));
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            ll aux;
            cin >> aux;
            ma[i][j] = aux;
            if((i+j) % 2 == 0){
                mb[i][j] = aux;
            } else {
                mb[i][j] = -aux;
            }
        }
    }

    vector<vector<ll>> p(h+1, vector<ll>(w+1, 0LL));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            p[i][j] = mb[i - 1][j - 1] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
        }
    }

    ll maxS = LLONG_MIN;
    for (int i = k-1; i < h; ++i) {
        for (int j = k-1; j < w; ++j) {
            long long soma = p[i+1][j+1] - p[i-k+1][j+1] - p[i+1][j-k+1] + p[i-k+1][j-k+1];

            int slinha = i-k+1;
            int scoluna = j-k+1;
            if ((slinha + scoluna) % 2 == 1) {
                soma = -soma;
            }
            maxS = max(maxS, soma);
        }
    }   

    cout << maxS << endl;
    return 0;
}
