#include <bits/stdc++.h>

using namespace std;

int main (){

    map<string,char> alfabeto;

    alfabeto["=.==="] = 'a';
    alfabeto["===.=.=.="] = 'b';
    alfabeto["===.=.===.="] = 'c';
    alfabeto["===.=.="] = 'd';
    alfabeto["="] = 'e';
    alfabeto["=.=.===.="] = 'f';
    alfabeto["===.===.="] = 'g';
    alfabeto["=.=.=.="] = 'h';
    alfabeto["=.="] = 'i';
    alfabeto["=.===.===.==="] = 'j';
    alfabeto["===.=.==="] = 'k';
    alfabeto["=.===.=.="] = 'l';
    alfabeto["===.==="] = 'm';
    alfabeto["===.="] = 'n';
    alfabeto["===.===.==="] = 'o';
    alfabeto["=.===.===.="] = 'p';
    alfabeto["===.===.=.==="] = 'q';
    alfabeto["=.===.="] = 'r';
    alfabeto["=.=.="] = 's';
    alfabeto["==="] = 't';
    alfabeto["=.=.==="] = 'u';
    alfabeto["=.=.=.==="] = 'v';
    alfabeto["=.===.==="] = 'w';
    alfabeto["===.=.=.==="] = 'x';
    alfabeto["===.=.===.==="] = 'y';
    alfabeto["===.===.=.="] = 'z';
    string a;
    int n;
    cin>>n;
    string aux = "";
    while(n-->0)
    {
        cin >> a;
        for(int i = 0; i < a.size();i++)
        {
            int cont = 0;
            aux += a[i];
            if((a[i+1] == '.') && (a[i+2] == '.'))
            {
                while(a[i+1] == '.')
                {
                    i++;cont++;
                }
                if(cont == 3)
                {
                    cout << alfabeto[aux];
                    aux = "";
                }
                else
                {
                    cout << alfabeto[aux] << " ";
                    aux = "";
                }
            }
        }
        cout << alfabeto[aux] << endl;
        aux = "";
    }

    return 0;
}
