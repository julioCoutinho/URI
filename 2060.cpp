#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);
   
    int n,d,t,q,c,x;
    cin >> n;
    d = t = q = c = 0;
    while(n-->0)
    {
        
        cin >> x;
        if(x % 2 == 0)
            d++;
        if(x % 3 == 0)
            t++;
        if(x % 4 == 0)
            q++;
        if(x % 5 == 0)
            c++;
    }
    
    cout << d << " Multiplo(s) de 2" << endl;
    cout << t << " Multiplo(s) de 3" << endl;
    cout << q << " Multiplo(s) de 4" << endl;
    cout << c << " Multiplo(s) de 5" << endl;
    

    return 0;
}