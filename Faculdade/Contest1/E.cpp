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
const int MOD = 998244353;      // Módulo para operações de aritmética modular (um primo comum).
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
    ll n,m,k;
    cin >> n >> m >> k;

    if (k == 0) {
        ll total = m;
        for (int i = 2; i <= n; ++i) {
            total = (total * m) % MOD;
        }
        cout << total << endl;
        return 0;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));

    ll soma_total_anterior = 0;
    for (int j = 1; j <= m; ++j) {
        dp[1][j] = 1;
    }
    soma_total_anterior = m;

    for (int i = 2; i <= n; ++i) {
        vector<ll> prefixo(m + 1, 0);
        for (int j = 1; j <= m; ++j) {
            prefixo[j] = (prefixo[j - 1] + dp[i - 1][j]) % MOD;
        }

        ll nova_soma_total = 0;

        for (int j = 1; j <= m; ++j) {
            ll contagem = 0;
            if (j - k >= 1) {
                contagem = (contagem + prefixo[j - k]) % MOD;
            }

            if (j + k <= m) {
                ll soma_superior = (prefixo[m] - prefixo[j + k - 1] + MOD) % MOD;
                contagem = (contagem + soma_superior) % MOD;
            }
            
            dp[i][j] = contagem;
            nova_soma_total = (nova_soma_total + dp[i][j]) % MOD;
        }
        soma_total_anterior = nova_soma_total;
    }


    cout << soma_total_anterior << endl;
    return 0;
}
