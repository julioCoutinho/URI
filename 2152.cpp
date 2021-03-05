#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int a,b,c,d;

    cin >> a ;
    while(a-->0)
    {
        cin >> b >> c >> d;
        if(d)
        {
            if(b < 10)
            {
                if(c < 10)
                {
                    cout << "0" << b << ":" << "0" << c << " - A porta abriu!" << endl;
                }
                else
                {
                    cout << "0" << b << ":" << c << " - A porta abriu!" << endl;
                }
            }
            else
            {
                if(c < 10)
                {
                    cout << b << ":" << "0" << c << " - A porta abriu!" << endl;
                }
                else
                {
                    cout << b << ":" << c << " - A porta abriu!" << endl;
                }
            }
        }
        else
        {
            if(b < 10)
            {
                if(c < 10)
                {
                    cout << "0" << b << ":" << "0" << c << " - A porta fechou!" << endl;
                }
                else
                {
                    cout << "0" << b << ":" << c << " - A porta fechou!" << endl;
                }
            }
            else
            {
                if(c < 10)
                {
                    cout << b << ":" << "0" << c << " - A porta fechou!" << endl;
                }
                else
                {
                    cout << b << ":" << c << " - A porta fechou!" << endl;
                }
            }
        }
    }



    return 0;
}
