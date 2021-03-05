#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double salario,taxa;

	cout << fixed << setprecision(2);

	cin >> salario;

	if(salario <= 2000)
	{
		cout << "Isento" << endl;
	}
	else if(salario > 2000 && salario <= 3000)
	{
		salario = salario - 2000;
		taxa = salario * 0.08;

		cout << "R$ " <<  taxa << endl;
	}
	else if(salario > 3000 && salario <= 4000)
	{
		salario = salario - 3000;
		taxa = 1000 * 0.08;
		taxa = taxa + (salario * 0.18);

		cout << "R$ " << taxa << endl;
	}
	else
	{
		salario = salario - 2000 - 1000 - 1500;
		taxa = 1000 * 0.08;
		taxa = taxa + (1500 * 0.18);
		taxa = taxa + (salario * 0.28);

		cout << "R$ " << taxa << endl;
	}

	return 0;
}
