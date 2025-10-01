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



int main() {
    fast_io();

    string s;
    cin >> s;
    string f;
    queue<char> p;

    for(char c: s){
        p.push(c);
    }

    while(!p.empty()){
        char aux = p.front();
        p.pop();
        if(p.empty()){
            f+='0';
            break;
        }
        if(aux == '-' && p.front() == '-'){
            f += '2';
            p.pop();
        } else if(aux == '-' && p.front() == '.'){
            f+='1';
            p.pop();
        } else {
            f += '0';
        }

    }

    cout << f << endl;

    return 0;
}