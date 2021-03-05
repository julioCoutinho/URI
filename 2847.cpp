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
    //ifstream in;
    //ofstream out;
    //in.open("entrada.txt",ios::in);
    //out.open("saida.txt",ios::out|ios::trunc);
    set<int>::iterator it;
    string en;
    set<int> s;
    int is = 0,l = 0,o = 0,v = 0,e = 0,y = 0,u = 0,c = 0;
    getline(cin,en);

    for(int i = 0; i < strlen(en.c_str()); i++)
    {
        if(en[i] == 'I')
            is++;
        else if(en[i] == 'l')
            l++;
        else if(en[i] == 'o')
            o++;
        else if(en[i] == 'v')
            v++;
        else if(en[i] == 'e')
            e++;
        else if(en[i] == 'y')
            y++;
        else if(en[i] == 'u')
            u++;
        else if(en[i] == '!')
            c++;
    }
    o = o /2;
    s.insert(is);
    s.insert(l);
    s.insert(v);
    s.insert(o);
    s.insert(e);
    s.insert(y);
    s.insert(u);
    s.insert(c);

    cout << *s.begin() << endl;


    return 0;
}
