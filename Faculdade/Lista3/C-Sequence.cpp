#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<int> idx;
    idx.push(-1);

    int mComp = 0;
    int count = 1; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            idx.push(i);
        } else { 
            idx.pop();

            if (idx.empty()) {
                idx.push(i);
            } else {
                int compA = i - idx.top();

                if (compA > mComp) {
                    mComp = compA;
                    count = 1; 
                } else if (compA == mComp) {
                    count++;
                }
            }
        }
    }

    if (mComp == 0) {
        cout << "0 1" << endl;
    } else {
        cout << mComp << " " << count << endl;
    }

    return 0;
}