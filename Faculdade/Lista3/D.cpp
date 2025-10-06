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
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
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
    int N;
    cin >> N;

    map<int, int> aberto;
    map<int, int> fechado;

    int count = 0;

    rep(i, 0, N){
        string S;
        cin >> S;

        int bal = 0;
        int minbal = 0;

        for(char c: S){
            if(c == '(') bal++;
            else bal--;
            minbal = min(minbal,bal);
        }

        int revbal = 0;
        int minrevbal = 0;

        rrep(j, S.length() - 1, 0){
            if(S[j] = ')') revbal++;
            else revbal--;
            minrevbal = min(minrevbal, revbal);
        }

        if(bal == 0){
            if(minbal >= 0) count++;
        } else if (bal > 0){
            if(minbal >= 0) aberto[bal]++;
        } else {
            if(minrevbal >= 0) fechado[-bal]++;
        }
    }

    ll res = 0;

    res += (ll)count * count;
    for (auto const& [bal, count] : aberto) {
        if (fechado.count(bal)) {
            res += (ll)count * fechado[bal];
        }
    }

    cout << res << endl;
    return 0;
}
