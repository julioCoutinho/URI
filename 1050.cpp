#include <bits/stdc++.h>

using namespace std;

struct ddd
{
	int numero;
	string cidade;
};



int main(int argc, char const *argv[])
{
	ddd Dados[10];

	Dados[0].numero = 61;
	Dados[0].cidade = "Brasilia";

	Dados[1].numero = 71;
	Dados[1].cidade = "Salvador";

	Dados[2].numero = 11;
	Dados[2].cidade = "Sao Paulo";

	Dados[3].numero = 21;
	Dados[3].cidade = "Rio de Janeiro";

	Dados[4].numero = 32;
	Dados[4].cidade = "Juiz de Fora";

	Dados[5].numero = 19;
	Dados[5].cidade = "Campinas";

	Dados[6].numero = 27;
	Dados[6].cidade = "Vitoria";

	Dados[7].numero = 31;
	Dados[7].cidade = "Belo Horizonte";

	
	int n;
	
	cin >> n;

	for (int x = 0; x < 8; x++)
	{
		if( Dados[x].numero == n)
		{
			cout << Dados[x].cidade << endl;
			return 0;
		}
	} 
	cout << "DDD nao cadastrado" << endl;


	return 0;
}
