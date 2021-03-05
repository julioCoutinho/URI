#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int fi[4],in[3];
    long double distInvasor = 0,distFiddle = 0;

    while(cin >> fi[0] >> fi[1] >> in[0] >> in[1] >> in[2] >> fi[2] >> fi[3])
    {
        distInvasor =   sqrt(pow(abs(fi[0] - in[0]),2) +  pow(abs(fi[1] - in[1]),2)) + (in[2] * 1.5);
        distFiddle = fi[2] + fi[3] ;
        
        if(distInvasor <= distFiddle)
            cout << "Y" << endl;
        else
            cout << "N" << endl;

    }
    return 0;
}