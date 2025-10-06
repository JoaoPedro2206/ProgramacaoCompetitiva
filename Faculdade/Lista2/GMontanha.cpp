#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> picos(N);
    for(int i = 0; i < N; i++){
        cin >> picos[i];
    }

    for(int i = 1; i < N-1; i++){
        if(picos[i-1] > picos[i] and picos[i] < picos[i+1]){
            cout << "S" << endl;
            return 0;
        }
    }

    cout << "N" << endl;

    return 0;
}