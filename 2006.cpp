#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f;
    f.open("entrada.txt",ios::in);

    int n,cont = 0,i=5,tipo;
    cin >> tipo;
    while(i-->0)
    {
        cin >> n;
        if(n == tipo)
            cont++;
    }
    cout << cont << endl;
    return 0;
}
