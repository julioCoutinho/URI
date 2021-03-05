#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int n,m;

    cin >> n >> m;

    int matriz[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matriz[i][j];
    
    for(int i = 1; i < n-1; i++)
    {
        for(int j=1;j < m-1; j++)
        {
            if(matriz[i][j] == 42)
            {
                if((matriz[i-1][j-1] == 7) && (matriz[i-1][j] == 7) && (matriz[i-1][j+1] == 7) && (matriz[i][j-1] == 7) && (matriz[i][j+1] == 7) && (matriz[i+1][j-1] == 7) && (matriz[i+1][j] == 7) && (matriz[i+1][j+1] == 7))
                {
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "0 0" << endl;
    return 0;
}