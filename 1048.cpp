#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double salario,reajuste,p;
	int percentual;

	cin >> salario;

	cout << fixed << setprecision(2);

	if(salario >= 0 && salario <= 400)
	{
		percentual = 15;
		p = 0.15;
	}
	else if(salario > 400 && salario <= 800)
	{
		percentual = 12;
		p = 0.12;
	}
	else if(salario > 800 && salario <= 1200)
	{
		percentual = 10;
		p = 0.10;
	}
	else if(salario > 1200 && salario <= 2000)
	{
		percentual = 7;
		p = 0.07;
	}
	else if(salario > 2000)
	{
		percentual = 4;
		p = 0.04;
	}

	reajuste = salario * p;
	salario += reajuste;
	
	cout << "Novo salario: " << salario << endl;
	cout << "Reajuste ganho: " << reajuste << endl;
	cout << "Em percentual: " << percentual << " %" << endl;


	return 0;
}
