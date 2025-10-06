#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int> notas(5);
    for(int i = 0; i < 5; i++){
        cin >> notas[i];
    }

    int count1 = 0;
    int count2 = 0;
    int maior = notas[0];
    int segmaior = 0;
    int idx = -1;
    for(int i = 0; i < 5; i++){
        if(notas[i] == maior){
            count1++;
        } else {
            idx = i;
            segmaior = notas[i];
            break;
        }
    }
    if(idx != -1){
        for(int i = idx; i < 5; i++){
            if(notas[i] == segmaior){
                count2++;
            } else {
                break;
            }
        }
    }
    
    cout << count1 << ' ' << count2 << endl;
    
    return 0;
}