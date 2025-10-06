#include <bits/stdc++.h>
using namespace std;

// P - Q <= 8
// P -> Peso da cabine mais pesada
// Q -> o peso da cabine mais leve

int main(){
    int N;
    cin >> N;
    vector<int> caixas(N);
    for(int i = 0; i < N; i++){
        cin >> caixas[i];
    }

    bool possivel = true;

    if(caixas[0] > 8){
        possivel = false;
    } else {
        for(int i = 1; i < N; i++){
            if(caixas[i] - caixas[i-1] > 8){
                possivel = false;
                break;
            }
        }

    }

    if (possivel) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}