#include <bits/stdc++.h>

using namespace std;

struct aluno
{
    string n;
    char r;
    int d;
};

bool testaMenor(aluno a, aluno b)
{
    if(a.d < b.d)
        return true;
    else if(a.d == b.d)
    {
        if(a.r < b.r)
            return true;
        else if(a.r == b.r)
            if(a.n < b.n)
                return true;
    }

    return false;
}

int main()
{
    int n,k;
    map <string,string> m;
    //ifstream in;
    //ofstream out;
    //in.open("entrada.txt",ios::in);
    //out.open("saida.txt",ios::out|ios::trunc);

    while(cin >> n)
    {


        aluno v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].n >> v[i].r >> v[i].d;
        }
        sort(v,v+n,testaMenor);

        for(int i = 0; i < n; i++)
            cout << v[i].n << endl;
        }


    return 0;
}
