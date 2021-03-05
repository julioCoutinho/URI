#include <bits/stdc++.h>

using namespace std;


int main()
{
    //ifstream in;
    //ofstream out;
    //in.open("entrada.txt",ios::in);
    //out.open("saida.txt",ios::out|ios::trunc);

    int n,caso = 1,cont;
    while(cin >> n)
    {
        cont = 0;
        if(n == 0)
            return 0;
        cont = pow(2,n)-1;
        cout << "Teste "<<caso<<endl;
        cout << cont << endl << endl;
        caso++;
    }

    return 0;
}
