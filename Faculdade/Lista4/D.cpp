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

const ll INF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);



void solve() {
}


int main() {
    fast_io();

    ll X;
    cin >> X;

    queue<ll> q;

    for(int i = 1; i <= 9; i++) {
        q.push(i);
    }

    ll num = 0;
    while (X > 0) {
        num = q.front();
        q.pop();
        X--;

        if (X == 0) break;
        ll ldigit = num % 10;

        if (ldigit > 0) {
            ll proxNum = num * 10 + (ldigit - 1);
            q.push(proxNum);
        }

        ll proxNumI = num * 10 + ldigit;
        q.push(proxNumI);

        if (ldigit < 9) {
            ll proxNumP = num * 10 + (ldigit + 1);
            q.push(proxNumP);
        }
    }

    cout << num << endl;

    return 0;
}