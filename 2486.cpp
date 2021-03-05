#include <bits/stdc++.h>

using namespace std;

int main (){

    int n,x;
    string op;

    map<string,int> cardapio;

    cardapio[" suco de laranja"] = 120;
    cardapio[" morango fresco"] = 85;
    cardapio[" mamao"] = 85;
    cardapio[" goiaba vermelha"] = 70;
    cardapio[" manga"] = 56;
    cardapio[" laranja"] = 50;
    cardapio[" brocolis"] = 34;
    int total;
    while(cin >> n)
    {
        total = 0;
        if(n == 0)
            break;
        for(int i = 0; i < n;i++)
        {
            cin >> x;
            getline(cin,op);
            total += (x * cardapio[op]);
        }
        if(total > 130)
        {
            cout << "Menos " << total - 130 << " mg" << endl;
        }
        else if (total < 110)
        {
            cout << "Mais " << 110 - total << " mg" << endl;
        }
        else
        {
            cout << total << " mg" << endl;
        }
    }
    return 0;
}
