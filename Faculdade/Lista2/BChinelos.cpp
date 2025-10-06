#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    // N -> numero de tamanhos de chinelos no estoque
    cin >> N;
    vector<int> estoque(N+1, 0);
    for(int i = 1; i <= N; i++){
        cin >> estoque[i];
    }


    int P;
    // P -> Numero de pedidos
    cin >> P;

    int count = 0;
    
    for(int i = 0; i < P; i++){
        int num;
        cin >> num;
        if(num <= N and estoque[num] > 0){
            count++;
            estoque[num]--;
        }
    }

    cout << count << endl;

    return 0;
}