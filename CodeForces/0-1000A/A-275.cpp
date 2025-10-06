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
    vector<vector<ll>> matriz(3, vector<ll>(3));
    vector<vector<int>> matrizLuz(3, vector<int>(3, 1));
 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < matriz[i][j]; k++){
                if(i == 0 && j == 0){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i+1][j] == 1) matrizLuz[i+1][j] = 0;
                    else matrizLuz[i+1][j] = 1;  
                    if(matrizLuz[i][j+1] == 1) matrizLuz[i][j+1] = 0;
                    else matrizLuz[i][j+1] = 1;                 
                } else if(i == 0 && j == 1){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i+1][j] == 1) matrizLuz[i+1][j] = 0;
                    else matrizLuz[i+1][j] = 1;  
                    if(matrizLuz[i][j+1] == 1) matrizLuz[i][j+1] = 0;
                    else matrizLuz[i][j+1] = 1; 
                    if(matrizLuz[i][j-1] == 1) matrizLuz[i][j-1] = 0;
                    else matrizLuz[i][j-1] = 1;
                } else if(i == 0 && j == 2){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i+1][j] == 1) matrizLuz[i+1][j] = 0;
                    else matrizLuz[i+1][j] = 1;  
                    if(matrizLuz[i][j-1] == 1) matrizLuz[i][j-1] = 0;
                    else matrizLuz[i][j-1] = 1; 
                } else if(i == 1 && j == 0){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i-1][j] == 1) matrizLuz[i-1][j] = 0;
                    else matrizLuz[i-1][j] = 1;  
                    if(matrizLuz[i][j+1] == 1) matrizLuz[i][j+1] = 0;
                    else matrizLuz[i][j+1] = 1;
                    if(matrizLuz[i+1][j] == 1) matrizLuz[i+1][j] = 0;
                    else matrizLuz[i+1][j] = 1;
                } else if(i == 2 && j == 0){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i-1][j] == 1) matrizLuz[i-1][j] = 0;
                    else matrizLuz[i-1][j] = 1;  
                    if(matrizLuz[i][j+1] == 1) matrizLuz[i][j+1] = 0;
                    else matrizLuz[i][j+1] = 1;
                } else if(i == 1 && j == 1){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i-1][j] == 1) matrizLuz[i-1][j] = 0;
                    else matrizLuz[i-1][j] = 1;  
                    if(matrizLuz[i+1][j] == 1) matrizLuz[i+1][j] = 0;
                    else matrizLuz[i+1][j] = 1;
                    if(matrizLuz[i][j+1] == 1) matrizLuz[i][j+1] = 0;
                    else matrizLuz[i][j+1] = 1;
                    if(matrizLuz[i][j-1] == 1) matrizLuz[i][j-1] = 0;
                    else matrizLuz[i][j-1] = 1;
                } else if(i == 1 && j == 2){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i-1][j] == 1) matrizLuz[i-1][j] = 0;
                    else matrizLuz[i-1][j] = 1;  
                    if(matrizLuz[i+1][j] == 1) matrizLuz[i+1][j] = 0;
                    else matrizLuz[i+1][j] = 1;
                    if(matrizLuz[i][j-1] == 1) matrizLuz[i][j-1] = 0;
                    else matrizLuz[i][j-1] = 1;
                } else if(i == 2 && j == 1){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i-1][j] == 1) matrizLuz[i-1][j] = 0;
                    else matrizLuz[i-1][j] = 1;  
                    if(matrizLuz[i][j+1] == 1) matrizLuz[i][j+1] = 0;
                    else matrizLuz[i][j+1] = 1;
                    if(matrizLuz[i][j-1] == 1) matrizLuz[i][j-1] = 0;
                    else matrizLuz[i][j-1] = 1;
                } else if(i == 2 && j == 2){
                    if(matrizLuz[i][j] == 1) matrizLuz[i][j] = 0;
                    else matrizLuz[i][j] = 1; 
                    if(matrizLuz[i-1][j] == 1) matrizLuz[i-1][j] = 0;
                    else matrizLuz[i-1][j] = 1;
                    if(matrizLuz[i][j-1] == 1) matrizLuz[i][j-1] = 0;
                    else matrizLuz[i][j-1] = 1;
                } else {
                    cout << "PQP" << endl;
 
                }
            }
        }
    }
 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrizLuz[i][j];
        }
        cout << endl;
    }
 
    return 0;
}