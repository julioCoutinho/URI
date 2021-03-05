#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    string num;
    int cont = 0;

    cin >> num;

    for(int i = 0; i < num.size();i++)
        if(num[i] == '1')
            cont++;

    if(cont % 2 == 0)
        cout << num << 0 << endl;
    else
        cout << num << 1 << endl;
        


    return 0;
}