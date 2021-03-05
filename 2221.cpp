#include <bits/stdc++.h>

using namespace std;


struct ponto
{
    int i,j;
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int t,b,a1,d1,l1,a2,d2,l2;
    double totalA,totalB;
    cin >> t;
    while(t-->0)
    {
        cin >> b;
        cin >> a1 >> d1 >> l1;
        cin >> a2 >> d2 >> l2;

        totalA = (a1 + d1)/2.0;
        totalB = (a2 + d2)/2.0;

        if(l1 % 2 == 0 && l2 %2 != 0)
            totalA += b;
        else if(l2 % 2 == 0 && l1 % 2 != 0)
            totalB += b;
        if(totalA > totalB)
        {
            cout << "Dabriel" << endl;
        }
        else if(totalB > totalA)
        {
            cout << "Guarte" << endl;
        }
        else
        {
            cout << "Empate" << endl;
        }       

    }

    return 0;
}
