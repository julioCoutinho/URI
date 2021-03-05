#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    int i,cont,j,aux=0,h=1,pos;
    string a,b;
    while(cin>>a>>b)
    {
        cont = 0;
        
        for(i=0;i<b.size();i++)
        {
            string str;
            for(j=i;j<a.size()+i;j++)
            {
                str+=b[j];
            }
            if(str == a)
            {
                cont++;
                pos = i+1;
            }
        }
        cout << "Caso #" << h << ":"<<endl;
        if(cont == 0)
            cout << "Nao existe subsequencia"<<endl;
        else
        {
            cout << "Qtd.Subsequencias: " << cont <<endl;
            cout << "Pos: " << pos << endl;
        }
        cout << endl;
        h++;
        
    }
    return 0;
}