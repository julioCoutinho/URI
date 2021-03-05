#include <bits/stdc++.h>

using namespace std;

int main (){

    int a,b,c;

    cin >> a >> b >> c;
    bool res1,res2,res3;
    res1 = (abs(b-c) < a) && (a < b+c);
    res2 = (abs(a-c) < b) && (b < a+c);
    res3 = (abs(a-b) < c) && (c < a+b);
    if(res1 && res2 && res3)
    {
        if(a == b && b == c)
        {
            cout << "Valido-Equilatero\nRetangulo: N"<<endl;
        }
        else if(a==b|| b == c || a == c)
        {
            cout << "Valido-Isoceles" << endl;
            if(a>b && a > c)
            {
                if(pow(a,2) == (pow(b,2)+pow(c,2)))
                    cout << "Retangulo: S" << endl;
                else
                    cout << "Retangulo: N" << endl;
            }
            else if(b > a && b > c)
            {
                if(pow(b,2) == (pow(a,2)+pow(c,2)))
                    cout << "Retangulo: S" << endl;
                else
                    cout << "Retangulo: N" << endl;
            }
            else
            {
                if(pow(c,2) == (pow(a,2)+pow(b,2)))
                    cout << "Retangulo: S" << endl;
                else
                    cout << "Retangulo: N" << endl;
            }
        }
        else
        {
            cout << "Valido-Escaleno" << endl;
            if(a>b && a > c)
            {
                if(pow(a,2) == (pow(b,2)+pow(c,2)))
                    cout << "Retangulo: S" << endl;
                else
                    cout << "Retangulo: N" << endl;
            }
            else if(b > a && b > c)
            {
                if(pow(b,2) == (pow(a,2)+pow(c,2)))
                    cout << "Retangulo: S" << endl;
                else
                    cout << "Retangulo: N" << endl;
            }
            else
            {
                if(pow(c,2) == (pow(a,2)+pow(b,2)))
                    cout << "Retangulo: S" << endl;
                else
                    cout << "Retangulo: N" << endl;
            }
        }
     }
     else
     {
         cout << "Invalido" << endl;
     }

    return 0;
}
