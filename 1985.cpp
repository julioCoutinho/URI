#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f;
    f.open("entrada.txt",ios::in);
    int n,x;
    map<int,double> menu;
    menu[1001] = 1.5;
    menu[1002] = 2.5;
    menu[1003] = 3.5;
    menu[1004] = 4.5;
    menu[1005] = 5.5;
    double total = 0,valor;
    cin >> n ;
    while(n-->0)
    {
        cin >> x >> valor;
        total+= (menu[x]*valor);
    }
    cout <<fixed << setprecision(2);
    cout << total <<endl;

    return 0;
}
