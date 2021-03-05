#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int aux = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		if(n % 2 == 0)
		{
			aux++;
		}
	}

	cout << aux << " valores pares" << endl;

	return 0;
}
