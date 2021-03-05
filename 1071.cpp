#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,soma = 0;
	cin >> n >> m;
	
	if(n > m)
	{
		int aux = m;
		m = n;
		n = aux;
	}
	if(n%2 == 1 || n % 2 == -1)
	{
		n++;
	}
	if(n % 2 == 0)
	{
		n++;
	}
	for(int i = n; i < m ;i++)
	{
		if(i % 2 == 1 || i % 2 == -1)
		{
			soma += i;
		}

	}

	cout << soma << endl;

	return 0;
}
