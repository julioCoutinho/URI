#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double n;
	int aux;

	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		if(n >= 0)
			aux++;
	}

	cout << aux << " valores positivos" << endl;

	return 0;
}
