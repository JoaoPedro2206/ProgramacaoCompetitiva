#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    // N -> numero de participantes
    // K -> numero minimo de canditatos que devem ser aprovados
    cin >> N >> K;
    vector<int> notas(N);
    for(int i = 0; i < N; i++){
        cin >> notas[i];
    }
    
    int notaCorte = 0;

    for(int i = 0; i<N; i++){
        int nota = notas[i];
        int aprovados = 0;

        for(int j = 0; j < N; j++){
            if(notas[j] >= nota){
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
