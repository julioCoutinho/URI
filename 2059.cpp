#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    int p,j1,j2,r,a,res;

    cin >> p >> j1 >> j2 >> r >> a;

    res = j1+j2;

    if(r && a)
    {
        cout << "Jogador 2 ganha!" << endl;
    }else if(r && !a)
    {
        cout << "Jogador 1 ganha!" << endl;
    }
    else if(!r && a)
    {
        cout << "Jogador 1 ganha!" << endl;
    }
    else
    {   
        if(p == 1)
        {
            if(res % 2 == 0)
            {
                cout << "Jogador 1 ganha!" << endl;
            }
            else
            {
                cout << "Jogador 2 ganha!" << endl;
            }
        }
        else
        {
            if(res % 2 == 1)
            {
                cout << "Jogador 1 ganha!" << endl;
            }
            else
            {
                cout << "Jogador 2 ganha!" << endl;
            }
        }
        
        
        
    }
    
    

    return 0;
}