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

    // n -> passageiros
    // m -> avioes
    ll n,m;
    cin >> n >> m;
    priority_queue<ll> max;
    vll accME(m);
    rep(i,0,m){
        ll aux;
        cin >> aux;
        max.push(aux);
        accME[i] = aux;
    }



   

    // soma max -> sempre pega dos que tem mais acentos
    ll maxs = 0;
    for(int i = 0; i < n; i++){
        ll amax = max.top();
        max.pop();

        maxs += amax;

        if(amax - 1 > 0){
            max.push(amax - 1);
        }
    }

    // soma min -> pega de um aviao ate acabar
    sort(all(accME));
    ll min = 0;
    ll pass2 = n;
    size_t j = 0;
    while(pass2 > 0){
        while(accME[j] > 0){
            if(pass2 == 0){
                break;
            }
            min += accME[j];
            accME[j]--;
            pass2--;
        }
        j++;
        if(j > accME.size()-1){
            j = 0;
        }

    }
    

    cout << maxs << ' ' << min << endl;



    return 0;
}
