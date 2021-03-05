#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    
    int a,b,dias=0;
    int v[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    while(cin >> a >> b)
    {
        dias = 0;
        if(a == 12 && b == 24)
            cout << "E vespera de natal!"<<endl;
        else
        {
            if(a == 12 && b > 25)
            {
                cout << "Ja passou!" << endl;
            }
            else if(a == 12 && b == 25)
            {
                cout << "E natal!"<<endl;
            }
            else
            {
                while(a != 12)
                {
                    dias += (v[a-1] - b);
                    b=0;
                    a++;
                }
                dias += 25 - b;
                cout << "Faltam " << dias << " dias para o natal!" << endl;
            }
            
        }
    }

    




    return 0;
}