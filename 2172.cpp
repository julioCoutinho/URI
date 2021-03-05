#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    unsigned long long int n,x;

    while(cin >> n)
    {
        cin >> x;
        if(n == 0)
            break;
        cout << x * n << endl;
    }
    
    return 0;
}