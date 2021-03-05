#include <bits/stdc++.h>

using namespace std;



int main(){

    long long int v,n,i;
    long double total;

    cin >> v >>n;

    total = v*n;
    cout.precision(0);
    cout << fixed;
    for(i=1;i<10;i++)
    {
        if(i !=9)cout << ceil(total/100.0 * (i*10.0)) << " ";
        else cout << ceil(total/100.0 * (i*10.0)) << endl;
    }

    return 0;
}
