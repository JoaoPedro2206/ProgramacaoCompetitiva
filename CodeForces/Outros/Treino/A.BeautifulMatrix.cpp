
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


int main() {
    fast_io();
    vector<vector<ll>> matriz(5, vector<ll>(5));
    int idxL;
    int idxC;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                idxL = i;
                idxC = j;
            }
        }
    }

    int count = 0;
    while(1){
        if (idxL > 2){
            count++;
            idxL--;
        } else if(idxL < 2){
            count++;
            idxL++;
        }

        if (idxC > 2){
            count++;
            idxC--;
        } else if(idxC < 2){
            count++;
            idxC++;
        }

        if(idxL == 2 && idxC == 2){
            break;
        }
    }

    cout << count << endl;

    return 0;
}