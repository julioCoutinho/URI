#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    int n,cont=1,i,x,casos = 1,j;

    vector<int> v;
    v.push_back(0);
    for(j = 1;j<=200;j ++)
    {
        for(i=0;i<cont;i++)
        {
            v.push_back(j);
        }
        cont++;
    }
    cont = 0;

    while(cin >> x)
    {
        cont++;casos=0;
        i=0;
        while(v[i] <= x && v[i+1] != 0)
        {
            i++;
            casos++;
        }
        if(x == 0)
        {
            cout << "Caso " << cont <<": " << casos <<" numero" << endl;
        }
        else
        {
            cout << "Caso " << cont <<": " << casos <<" numeros" << endl;
        }
        
        i = 0;
        while(v[i] <= x && v[i+1] != 0)
        {
            if(v[i+1] > x)
                cout << v[i] << endl;
            else
                cout << v[i] << " ";
            i++;
        }
        cout << endl;
    }

    return 0;
}
