#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double n,media = 0;
	int aux = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		if(n >= 0)
		{
			aux++;
			media += n;
		}
	}
	if(aux > 0)
	{
		media = media / aux;
	}
	cout << fixed << setprecision(1);
	cout << aux << " valores positivos" << endl;
	cout << media << endl;

	return 0;
}
