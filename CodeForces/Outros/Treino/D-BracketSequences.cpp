#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    string seq;
    int comp = 0;
    int aberto = 0;
    int fechado = 0;
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> seq;
        for(char c : seq){
            if(c == '('){
                aberto++;
            } else{
                fechado++;
            }
        }

        
    }
    


    return 0;
}