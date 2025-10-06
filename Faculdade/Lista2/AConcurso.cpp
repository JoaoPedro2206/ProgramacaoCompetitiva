#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> notas(N);
    for(int i = 0; i < N; i++){
        cin >> notas[i];
    }

    int notaCorte = 0;
    for(int j = 0; j < N; j++){
        int nota = notas[j];
        int aprovados = 0;
        for(int i = 0; i < N; i++){
            if(notas[i] >= nota){
                aprovados++;
            }

        }
        if(aprovados >= K and nota > notaCorte){
            notaCorte = nota;
        }
    }

    cout << notaCorte << endl;


    return 0;
}