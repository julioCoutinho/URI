#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f;
    f.open("entrada.txt",ios::in);

    string a;

    cin >> a;
    reverse(a.begin(),a.end());
    cout << a << endl;

    return 0;
}
