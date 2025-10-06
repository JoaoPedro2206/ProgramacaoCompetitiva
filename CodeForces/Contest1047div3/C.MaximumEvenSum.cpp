#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        long long a, b;
        cin >> a >> b;
        if ((a % 2) == (b % 2)) {
            if (a % 2 == 1) {
                long long soma1 = a + b;
                long long soma2 = a * b + 1;
                cout << max(soma1, soma2) << endl;
            } else {
                long long soma1 = a + b;
                long long soma2 = (a * b / 2) + 2;
                cout << max(soma1, soma2) << endl;
            }
        }
        else {
            if (a % 2 == 0) {
                cout << -1 << endl;
            } else {
                if (b % 4 != 0) {
                    cout << -1 << endl;
                } else {
                    long long soma1 = 2 * a + b / 2;
                    long long soma2 = (a * b / 2) + 2;
                    cout << max(soma1, soma2) << endl;
                }
            }
        }

        }
   
    return 0;
}