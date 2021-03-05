#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    
    int n,m;
    string a;
    cin >> n >> m;
    while(m-->0)
    {
        cin >> a;
        if(a == "fechou")
            n++;
        else
            n--;
    }
    cout << n << endl;

    return 0;
}