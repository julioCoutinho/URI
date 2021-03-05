#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
    
    int n,m,aux;
    set <int> s;
    s.insert(4);s.insert(7);s.insert(12);s.insert(22);s.insert(52);s.insert(102);
    s.insert(10);s.insert(15);s.insert(25);s.insert(55);s.insert(105);
    s.insert(10);s.insert(30);s.insert(60);s.insert(110);
    s.insert(40);s.insert(70);s.insert(120);
    s.insert(100);s.insert(150);
    s.insert(200);
    
    aux = s.size();
    while(cin >> n >> m)
    {
        if(n != 0 && m != 0)
        {
            s.insert(m-n);
            if(s.size() > aux)
            {
                s.erase(m-n);
                cout << "impossible"<<endl;
            }
            else
            {
                cout << "possible" << endl;
            }
        }
        else
        {
            break;
        }
        
    }



    return 0;
}