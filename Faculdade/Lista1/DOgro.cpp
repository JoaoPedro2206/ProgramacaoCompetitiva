#include <bits/stdc++.h>
using namespace std;

int main(){
    int D, E;
    cin >> E;
    cin >> D;
    int res = 0;
    if(E < D){
        res = (2*(D-E));
    } else {
        res = E+D;
    }

    cout << res << endl;

    return 0;
}