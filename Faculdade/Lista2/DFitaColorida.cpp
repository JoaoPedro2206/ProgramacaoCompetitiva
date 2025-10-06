#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> fita(N);
    for(int i = 0; i < N; i++){
        cin >> fita[i];
    }

    vector<int> distancias(N);

    int distAtual = N;
    for(int i = 0; i < N; i++){
        if(fita[i] == 0){
            distAtual = 0;
        } else {
            distAtual++;
        }
        distancias[i] = distAtual;
    }
    
    distAtual = N;
    for (int i = N - 1; i >= 0; --i) {
        if (fita[i] == 0) {
            distAtual = 0;
        } else {
            distAtual++;
        }
        distancias[i] = min(distancias[i], distAtual);
    }

    for (int i = 0; i < N; ++i) {
        int cor = min(distancias[i], 9);
        cout << cor << (i == N - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}