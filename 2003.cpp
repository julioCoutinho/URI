#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f;
    f.open("entrada.txt",ios::in);

    string hora,aux;
    int a,b,c,atraso = 0,i,numero,resto;

    while(cin>> hora)
    {
        aux = "";
        for(i=0;i<hora.size();i++)
        {
            if(hora[i] != ':')
            {
                aux+=hora[i];
            }
        }
        numero = atoi(aux.c_str());
        a = numero/100;
        resto = numero % 100;
        b = resto / 10;
        c = resto%10;
        if(7-a >= 0)
        {
            if(a == 7)
            {
                atraso = b*10;
                atraso = atraso + c;
                cout << "Atraso maximo: " << atraso << endl;
            }
            else
            {
                cout << "Atraso maximo: 0" << endl;
            }
        }
        else
        {
            atraso = (a-7) * 60;
            atraso = atraso + b*10;
            atraso = atraso + c;
            cout << "Atraso maximo: " << atraso << endl;
        }
    }

    return 0;
}
