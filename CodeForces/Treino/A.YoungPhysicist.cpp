#include <iostream>
using namespace std;

int balancex = 0;
int balancey = 0;
int balancez = 0;

int main(){

    int N;
    cin >> N;
    while(N--){
        int a,b,c;
        cin >> a >> b >> c;
        balancex += a;
        balancey += b;
        balancez += c;
    }

    if(balancex == 0 && balancez == 0 && balancey == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;

    }
    return 0;
}