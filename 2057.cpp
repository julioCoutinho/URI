#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    int s,t,fu,aux;

    cin >> s >> t >> fu;
    aux = s+t+fu;
    if(s+t < abs(fu) && fu < 0)
        aux = 24-abs(fu)+s+t;
    else
        aux = aux % 24;
    
    cout << aux << endl;;


    return 0;
}