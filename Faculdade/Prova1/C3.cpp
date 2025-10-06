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


struct Candidato {
    int id;
    int notaA, notaB, notaC;
    int notaTotal;
};


bool compararCandidatos(const Candidato& c1, const Candidato& c2) {
    if (c1.notaTotal != c2.notaTotal) {
        return c1.notaTotal > c2.notaTotal;
    }
    return c1.id > c2.id;
}

int main() {
    fast_io();

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<Candidato> candidatos(n);
    for (int i = 0; i < n; ++i) {
        candidatos[i].id = i + 1;
        cin >> candidatos[i].notaA >> candidatos[i].notaB >> candidatos[i].notaC;
        candidatos[i].notaTotal = candidatos[i].notaA + candidatos[i].notaB + candidatos[i].notaC;
    }

    vector<bool> eliminado(n + 1, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> paA;
    for (int i = 0; i < n; ++i) {
        paA.push({candidatos[i].notaA, candidatos[i].id});
    }

    for (int i = 0; i < a; ++i) {
        pair<int, int> pior_candidato = paA.top();
        paA.pop();
        eliminado[pior_candidato.second] = true;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> paB;
    for (int i = 0; i < n; ++i) {
        if (!eliminado[candidatos[i].id]) {
            paB.push({candidatos[i].notaA + candidatos[i].notaB, candidatos[i].id});
        }
    }

    for (int i = 0; i < b; ++i) {
        pair<int, int> pior_candidato = paB.top();
        paB.pop();
        eliminado[pior_candidato.second] = true;
    }


    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pqC;
    for (int i = 0; i < n; ++i) {
        if (!eliminado[candidatos[i].id]) {
            pqC.push({candidatos[i].notaTotal, candidatos[i].id});
        }
    }
    
    for (int i = 0; i < c; ++i) {
        pair<int, int> pior_candidato = pqC.top();
        pqC.pop();
        eliminado[pior_candidato.second] = true;
    }


    vector<Candidato> contratados;
    for (int i = 0; i < n; ++i) {
        if (!eliminado[candidatos[i].id]) {
            contratados.push_back(candidatos[i]);
        }
    }

    sort(all(contratados), compararCandidatos);
    for (int i = 0; i < contratados.size(); i++) {
        cout << contratados[i].id << " " << contratados[i].notaTotal << "\n";
    }

    return 0;
}