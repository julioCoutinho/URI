#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    long double altura,area,volume,diametro,aux;

    while(cin >> volume >> diametro)
    {
        diametro = diametro / 2;

        area =pow(diametro,2) * 3.14;

        altura =   volume / area;
        //aux = ceil(area);
        //if(area < aux)
        //{
        //  area -= 0.005;
        //}
        cout << fixed << setprecision(2);
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }



    return 0;
}