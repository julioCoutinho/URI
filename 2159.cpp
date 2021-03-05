#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int n;
    double p,m;

    cin >> n;

    p = (n) / log(n);

    m = (1.25506 *n)/ log(n);

    cout << fixed << setprecision(1);

    cout << p << " " << m << endl;



    return 0;
}
