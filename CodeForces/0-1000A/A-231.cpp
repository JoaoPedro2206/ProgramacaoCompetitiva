#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<int> amigos(3);
    int a1, a2, a3;
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> a1 >> a2 >> a3;
        if((a1 == 1 && a2 == 1) || (a1 == 1 && a3 == 1) || (a2 == 1 && a3 == 1) || (a1 == 1 && a2 == 1 && a3 == 1)){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}