#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int idadeC;
    if ((n1 >= n2 and n1 <= n3) or (n1 <= n2 && n1 >= n3) ){
        idadeC = n1;
    } else if((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3)){
        idadeC = n2;
    } else {
        idadeC = n3;
    }

    cout << idadeC << endl;
    return 0; 
} 


