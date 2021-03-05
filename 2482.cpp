#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string a,b,line;
    map <string,string> m;
    //ifstream in;
    //ofstream out;
    //in.open("entrada.txt",ios::in);
    //out.open("saida.txt",ios::out|ios::trunc);
    cin >> n;
    while(n-->0)
    {
        cin >> a;
        cin.ignore();
        getline(cin,line);
        m[a] = line;
    }
    cin >> k;
    while(k-->0)
    {
        cin.ignore();
        getline(cin,a);
        cin >> b;
        cout << a << endl;
        cout << m[b] << endl;
        cout << endl;
    }

    return 0;
}
