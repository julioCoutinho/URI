#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int n;
    
    cin >> n;

    int matriz[n+1][n+1];

    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < n+1; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matriz[i][j] + matriz[i+1][j] + matriz[i][j+1] + matriz[i+1][j+1] < 2)
                cout << "U";
            else 
                cout << "S";
        }
        cout << endl;
    }


    return 0;
}