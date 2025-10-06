#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, S;
    // N -> numero de dias do periodo de interesse
    // S -> Saldo da conta no inicio do periodo
    cin >> N >> S;
    int menor = S;
    int valorDia;
    for(int i = 0; i < N; i++){
        cin >> valorDia;
        S = S + valorDia;
        if(S < menor){
            menor = S;
        }
    }
    cout << menor << endl;
    return 0; 
} 
