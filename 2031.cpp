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
    string a,b;
    
    cin >> n;
    
    while(n-->0)
    {
        cin >> a >> b;
        if(a == "ataque" && b != "ataque")
        {
            cout << "Jogador 1 venceu" << endl;
        }
        else if(a != "ataque" && b == "ataque")
        {
            cout << "Jogador 2 venceu" << endl;
        }else if(a == "ataque" && b == "ataque")
        {
            cout << "Aniquilacao mutua" << endl;
        }else if(a != "papel" && b == "papel")
        {
            cout << "Jogador 1 venceu" << endl;
        }else if(a == "papel" && b != "papel")
        {
            cout << "Jogador 2 venceu" << endl;
        }
        else if(a == "papel" && b == "papel")
        {
            cout << "Ambos venceram" << endl;
        }
        else
        {
            cout << "Sem ganhador" << endl;
        }
    }
    
    


    return 0;
}