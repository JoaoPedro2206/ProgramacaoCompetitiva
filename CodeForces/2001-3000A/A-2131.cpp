#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int N2;
        cin >> N2;
        vector<int> A(N2);
        vector<int> B(N2);
        for(int j = 0; j < N2; j++){
            cin >> A[j];
        }
        for(int k = 0; k < N2; k++){
            cin >> B[k];
        }

        int count = 0;
        for(int i = 0; i < N2; i++){
            if(A[i] > B[i]){
                count = count + (A[i] - B[i]);
            }
        }
        count++;

        cout << count << endl;      
    }

    return 0;
}