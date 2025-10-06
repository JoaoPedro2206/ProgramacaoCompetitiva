#include <bits/stdc++.h>
using namespace std;


int Sinuca(int N, vector<int> bolas){
    
    if (bolas.size() == 1){
        return bolas[0];
    }

    vector<int> camadas(N-1);

    for(int i = 0; i < N-1; i++){
        int x = bolas[i];
        int y = bolas[i+1];
        if(x == y){
            camadas[i] = 1; // Bola Preta
        } else{
            camadas[i] = -1; // Bola Branca
        }
    }

    return Sinuca(N-1, camadas);
}



int main(){
    int N;
    cin >> N;
    // Bola Preta = 1
    // Bola Branca = -1
    vector<int> bolas(N);
    for(int i = 0; i < N; i++){
        cin >> bolas[i];
    }
    
    int res = 0;
    res = Sinuca(N, bolas);

    if(res == -1){
        std::cout << "branca" << std::endl;
    } else {
        std::cout << "preta" << std::endl;
    }
    
    return 0;
}