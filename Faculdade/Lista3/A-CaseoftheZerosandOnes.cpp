#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    string l;
    cin >> l;
    stack<char> res;
    for(int i = 0; i < N; i++){
        if(!res.empty() &&  res.top() != l[i]){
            res.pop();
        } else {
            res.push(l[i]);
        }
    }
    cout << res.size() << endl;

    return 0;
}