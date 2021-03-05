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
    long double fib = 0,part1 = 0,part2 = 0;
    cout.precision(1);

    cin >> n;
    if(n == 1 || n == 0)
    {
        cout << fixed << 1.0 << endl;
        return 0;
    }
    part1 = (1+(sqrt(5)))/2.0;
    part1 = pow(part1,n);
    part2 = (1-(sqrt(5)))/2.0;
    part2 = pow(part2,n);
    if(n % 2 == 0)
        part2 = abs(part2);
    fib = (part1 - part2) / sqrt(5);
    cout << fixed <<fib << endl;

    return 0;
}