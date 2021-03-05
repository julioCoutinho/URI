#include <iostream>

using namespace std;

void quebrar(string valor, int &n, int &m){
    string notas, moedas;
    int ponto;
    for(int i = 0; i < valor.length(); i++){
        if(valor[i] == '.') ponto = i;
    }
    notas = string(valor, 0, ponto);
    moedas = string(valor, ponto + 1, valor.length() - 1 - ponto);
    n = stoi(notas);
    m = stoi(moedas);
}

int main() {
    string resto;
    int Rnotas, Rmoedas, c2, c5, c10, c20, c50, c100, m1, m50, m25, m10, m5, m01;
    cin >> resto;
    quebrar(resto, Rnotas, Rmoedas);

    c100 = Rnotas / 100;
    Rnotas = Rnotas - (c100*100);
    c50 = Rnotas/50;
    Rnotas = Rnotas - (c50*50);
    c20 = Rnotas/20;
    Rnotas = Rnotas - (c20*20);
    c10 = Rnotas/10;
    Rnotas = Rnotas - (c10*10);
    c5 = Rnotas/5;
    Rnotas = Rnotas - (c5*5);
    c2 = Rnotas/2;
    Rnotas = Rnotas - (c2*2);

    if(Rnotas != 0){
        Rmoedas += Rnotas*100;
    }

    m1 = Rmoedas/100;
    Rmoedas = Rmoedas - (m1*100);
    m50 = Rmoedas/50;
    Rmoedas = Rmoedas - (m50*50);
    m25 = Rmoedas/25;
    Rmoedas = Rmoedas - (m25*25);
    m10 = Rmoedas/10;
    Rmoedas = Rmoedas - (m10*10);
    m5 = Rmoedas/5;
    Rmoedas = Rmoedas - (m5*5);
    m01 = Rmoedas/1;
    Rmoedas = Rmoedas - (m01*1);

    cout << "NOTAS:" << endl;
    cout << c100 << " nota(s) de R$ 100.00" << endl;
    cout << c50 << " nota(s) de R$ 50.00" << endl;
    cout << c20 << " nota(s) de R$ 20.00" << endl;
    cout << c10 << " nota(s) de R$ 10.00" << endl;
    cout << c5 << " nota(s) de R$ 5.00" << endl;
    cout << c2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;
}