#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    long long int n;
    string a;
    cin >> n;
    long double saida;
    cout << fixed << setprecision(2);
    while(n-->0)
    {
        cin >> a;
        saida = a.size()/100.0;
        cout << saida << endl;
    }



    return 0;
}
