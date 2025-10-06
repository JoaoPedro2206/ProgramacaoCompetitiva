#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    string s;
    cin >> s;
    string res;

    int bal = 0;
    int esq = 0;
    for(char c : s){
        if(c == '('){
            bal++;
        } else {
            bal--;
        }
        if(bal < 0){
            esq++;
            bal = 0;
        }
    }

    int dir = bal;
    for(int i = 0; i < esq; i++){
        res += '(';
    }
    res += s;
    for(int i = 0; i < dir; i++){
        res += ')';
    }

    cout << res << endl;
    return 0;
}