#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f;
    f.open("entrada.txt",ios::in);

    double n,maior=-1,numero,x,mNum;

    cin >> n;



    while(n-->0)
    {
        cin >> numero >> x;
        if(maior < x)
        {
            maior = x;
            mNum = numero;
        }
    }
    if(maior < 8.0)
        cout << "Minimum note not reached" << endl;
    else
        cout << mNum << endl;

    return 0;
}
