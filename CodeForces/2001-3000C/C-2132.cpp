#include <bits/stdc++.h>
using namespace std;

vector <long long> valorM;

void valor(){
    int maxX = 20;
    valorM.resize(maxX + 1);
    valorM[0] = 3;
    long long p3M1 = 1;
    for(int x = 1; x <= maxX; x++){
        long long p3P1 = p3M1 * 9;
        valorM[x] = p3P1 + (long long)x * p3M1;
        p3M1 *= 3;
    }

}

int main(){
    valor();
    int N;
    cin >> N;
 
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        long long custoT = 0;
        int b = 0;

        while(x > 0){
            int dig = x%3;
            if(dig > 0){
                custoT += (long long)dig * valorM[b];
            }
            x /= 3;
            b++;
        }

        cout << custoT << endl;

    }


    return 0;
}