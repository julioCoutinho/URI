#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double n = 0,j;

    while(n <= 2)
    {
        cout << "I=" << n << " J="<< 1+n << endl;
        cout << "I=" << n << " J="<< 2+n << endl;
        cout << "I=" << n << " J="<< 3+n << endl;

        n+=0.2;
    }


    return 0;
}
