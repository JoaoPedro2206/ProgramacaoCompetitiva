#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, P;
    cin >> N;
    cin >> P;
    int bacterias = 1;
    int count = -1;
    while(bacterias <= N){
        bacterias = bacterias * P;
        count++;
    }

    cout << count << endl;
    return 0; 
} 
