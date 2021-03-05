#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    double n,totalS = 0,totalB = 0,totalA = 0,x,saque = 0,bloqueio = 0,ataque = 0;
    string lixo;
    cin >> n;
    while(n-->0)
    {
        cin >> lixo;
        cin >> x;
        totalS += x;
        cin >> x;
        totalB += x;
        cin >> x;
        totalA += x;
        cin >> x;
        saque += x;
        cin >> x;
        bloqueio += x;
        cin >>x;
        ataque += x;
    }

    cout.precision(2);

    cout <<fixed << "Pontos de Saque: " << (saque/ totalS)*100 << " %."<<endl;
    cout <<fixed << "Pontos de Bloqueio: " << (bloqueio / totalB)*100 << " %."<<endl;
    cout <<fixed << "Pontos de Ataque: " << (ataque/totalA)*100 << " %."<<endl;

    return 0;
}
