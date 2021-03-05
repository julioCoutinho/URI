#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    string a;

    getline(cin,a);

    if(a.size() <= 140) cout << "TWEET" << endl; else cout << "MUTE" << endl;

    return 0;
}