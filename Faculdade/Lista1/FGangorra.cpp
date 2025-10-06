#include <bits/stdc++.h>
using namespace std;

int main(){
    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;
    int res1, res2;
    res1 = P1 * C1;
    res2 = P2 * C2;
    
    if(res1 == res2){
        cout << 0 << endl;
    } else if (res1 > res2){
        cout << -1 << endl;
    } else{
        cout << 1 << endl;
    }
    return 0; 
} 
