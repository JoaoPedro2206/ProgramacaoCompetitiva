#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<string> final(N);
    for(int i = 0; i < N; i++){
        string palavra;
        cin >> palavra;
        if(palavra.length() > 10){
            char prim = palavra[0];
            char ult = palavra[palavra.length()-1];
            ostringstream oss;
            oss << prim << (palavra.length() - 2) << ult;
            string res = oss.str();
            final[i] = res;
        } else {
            final[i] = palavra;
        }
    }

    for(int i = 0; i < N; i++){
        cout << final[i] << endl; 
    }


    return 0;
}