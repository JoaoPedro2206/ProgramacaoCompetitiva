#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> escher(N);
    for(int i = 0; i < N; i++){
        cin >> escher[i];
    }

    int count = N-1;
    int res = escher[0] + escher[count];
    for(int i = 0; i < N; i++){
        if(escher[i] + escher[count] == res){
            count--;
            continue;
        }
        else{
            cout << 'N' << endl;
            return 0;
        }
    }
    cout << 'S' << endl;
    return 0;
}