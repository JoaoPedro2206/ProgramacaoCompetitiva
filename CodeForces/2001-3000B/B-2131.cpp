#include <bits/stdc++.h> 
using namespace std; 

int main(){ 
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){

        int K;
        cin >> K;
            if(K%2 != 0){
                for(int i = 0; i < K; i++){
                    if (i % 2 == 0) { 
                    cout << -1 << " ";
                    } else {
                    cout << 3 << " ";
                    }
                }
                cout << "\n";
            } else {
                for (int i = 0; i < K - 2; ++i) {
                    if (i % 2 == 0) {
                        cout << -1 << " ";
                    } else {
                        cout << 3 << " ";
                    }
                }
                cout << -1 << " " << 2 << "\n";
            }
        
    }
    return 0; 

}