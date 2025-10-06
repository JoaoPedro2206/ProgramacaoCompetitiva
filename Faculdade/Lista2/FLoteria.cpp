#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numS(6);
    vector<int> numG(6);
    vector<int> elementosComuns;

    cin >> numS[0] >> numS[1] >> numS[2] >> numS[3] >> numS[4] >> numS[5];
    cin >> numG[0] >> numG[1] >> numG[2] >> numG[3] >> numG[4] >> numG[5];

    sort(numS.begin(), numS.end());
    sort(numG.begin(), numG.end());

    set_intersection(numS.begin(), numS.end(), numG.begin(), numG.end(), back_inserter(elementosComuns));

    int res = 0;
    res = elementosComuns.size();

    if(res == 3){
        cout << "terno" << endl;
    } else if (res == 4){
        cout << "quadra" << endl;
    } else if (res == 5){
        cout << "quina" << endl;
    } else if (res == 6){
        cout << "sena" << endl;
    } else {
        cout << "azar" << endl;
    }

    return 0;
}