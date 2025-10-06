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

    vector<vector<ll>> mat(5, vector<ll>(5));
    rep(i,0,5){
        rep(j,0,5){
            cin >> mat[i][j];
        }
    }

    vll e = {0,1,2,3,4};
    ll maxf = 0;
    do{
        ll fel = (mat[e[0]][e[1]] + mat[e[1]][e[0]]) + (mat[e[1]][e[2]] + mat[e[2]][e[1]]) + (2 * ((mat[e[2]][e[3]]) + (mat[e[3]][e[2]]))) + (2 * ((mat[e[3]][e[4]]) + (mat[e[4]][e[3]])));
        maxf = max(maxf, fel);
    }while(next_permutation(all(e)));
    
    cout << maxf << endl;

    return 0;
}
