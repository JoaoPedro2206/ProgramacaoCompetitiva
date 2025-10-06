#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;

    vector<int> atletas(N + 1);

    for(int i = 1; i <= N; i++){
        int atleta;
        cin >> atleta;
        atletas[atleta] = i;
    }

    for(int i = 1; i <= N; i++){
        cout << atletas[i] << endl;
    }

    return 0;
}