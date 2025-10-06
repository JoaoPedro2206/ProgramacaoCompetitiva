#include <bits/stdc++.h>
using namespace std;

int main(){
    int X;
    cin >> X;
    for(int i = 0; i < X; i++){
        int N,M;
        string a;
        string b;
        string c;
        vector<char> pfinal;

        cin >> N;
        cin >> a;
        cin >> M;
        cin >> b;
        cin >> c;

        for(int i = 0; i < M; i++){
            char aux;
            aux = b[i];
            if(c[i] == 'D'){
                a.insert(N,1,aux);
                N++;
            } else {
                a.insert(0,1,aux);
                N++;
            }
        }
        
        cout << a << endl;
    }



    return 0;
}