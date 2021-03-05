#include <bits/stdc++.h>

using namespace  std;


int main(int argc, char const *argv[])
{
	int n,m,j = 0;

	cin >> n;
	string aux[n];
	for(int i = 0; i < n; i++)
	{
		cin >> m;
		if(m % 2 == 0 && m != 0)
		{
			aux[j] += "EVEN ";
		}
		else if (m != 0)
		{
			aux[j] += "ODD ";
		}

		if(m > 0)
		{
			aux[j] += "POSITIVE\n";
		}
		else if(m == 0)
		{
			aux[j] += "NULL\n";
		}
		else
		{
			aux[j] += "NEGATIVE\n";
		}
		j++;
	}

	for (int i = 0; i < n;i++)
	{
		cout << aux[i];
	}

	return 0;
}
