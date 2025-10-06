#include  <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    stack<int> val;
    stack<int> qtd;
    int count = 0;
    while(N--){
        int v;
        cin >> v;
        count++;
        if(val.empty() || val.top() != v){
            val.push(v);
            qtd.push(1);
        } else{
            qtd.top()++;
        }

        if(!val.empty() && val.top() == qtd.top()){
            count = count - val.top();
            val.pop();
            qtd.pop();
        }

        cout << count << endl;
    }

    return 0;
}