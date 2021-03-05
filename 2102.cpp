#include <bits/stdc++.h>

using namespace std;


int main()
{
    //ifstream in;
    //ofstream out;
    //in.open("entrada.txt",ios::in);
    //out.open("saida.txt",ios::out|ios::trunc);
    int t,n,l;
    int col,lin,val,lixo;
    cin >> t;
    int aux = 1;
    while(t != aux-1)
    {
        cin >> n >> l;
        n++;
        int matriz[101][101] = {0};

        for(int i = 0; i < l; i++)
        {
            cin >> lixo >> lin >> col >> val;
            matriz[lin][col] += val;
        }
        for(int i = 0; i < 101; i++)
        {
            for(int j = 0; j <101; j++)
            {
                if(matriz[i][j] != 0)
                    cout << i << " "<< j << " " << matriz[i][j] << endl;
            }
        }
        if(t != aux)
            cout << endl;
        aux++;
    }

    return 0;
}
