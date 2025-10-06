#include <bits/stdc++.h> 
using namespace std; 

int main(){ 
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int sizeS;
        long long cost;
        cin >> sizeS >> cost;
        map<long long, int> counts;

        for(int k = 0; k < sizeS; k++){
            long long Sval;
            cin >> Sval;
            long long r = Sval % cost;
            long long normalR = min(r, ((cost-r) % cost));
            counts[normalR]++;
        }
        for(int k = 0; k < sizeS; k++){
            int Tval;
            cin >> Tval;
            long long r = Tval % cost;
            long long normalR = min(r, ((cost-r) % cost));
            counts[normalR]--;
        }

        bool possible = true;
        for (auto const& pair : counts) {
            if (pair.second != 0) {
                possible = false;
                break;
            }
        }
        
        if(possible){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;

}
