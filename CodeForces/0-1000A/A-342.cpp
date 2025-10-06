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
    
    ll n; cin >> n;
    map<ll,ll> nums;
    rep(i,0,n){
        ll aux;
        cin >> aux;
        nums[aux]++;
    }

    if(nums[5] > 0 || nums[7] > 0 || nums[4] > nums[2] || nums[6] < nums[3] || nums[1] != n/3 || nums[2] + nums[3] != n/3 || nums[4] + nums[6] != n/3){
        cout << -1 << endl;
        return 0;
    }


    for(int i = 0; i < nums[4]; i++){
        cout << 1 << ' ' << 2 << ' ' << 4 << endl;
    }

    for(int i = 0; i < nums[2] - nums[4]; i++){
        cout << 1 << ' ' << 2 << ' ' << 6 << endl;
    }

    for(int i = 0; i < nums[3]; i++){
        cout << 1 << ' ' << 3 << ' ' << 6 << endl;
    }

 


    return 0;
}
