#include <bits/stdc++.h>
using namespace std;


int main(){
    int Num;
    cin >> Num;

    for(int i = 0; i < Num; i++){
        long long N;
        cin >> N;

        vector<long long> solucoes;

        long long p10 = 10;
        for(long long k = 1; k < 19;k++){
            long long d = 1 + p10; 
            if(d > N){
                break;
            }
            if(N % d == 0){
                long long x = N / d;
                solucoes.push_back(x);
            }
            
            if (p10 > 2e17) break;
            p10 *= 10;       
        }

        sort(solucoes.begin(), solucoes.end());

        cout << solucoes.size() << endl;
        for (long long sol : solucoes) {
            cout << sol << endl;
        }

    }
    


    return 0;
}