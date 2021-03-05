#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,k,x;
	cin >> n;
	while(n-->0)
	{
		cin >> k;
		while(k-->0)
		{
			cin >> x;
			if(x == 1)
				cout << "Rolien" << endl;
			else if(x == 2)
				cout << "Naej" << endl;
			else if(x == 3)
				cout << "Elehcim" << endl;
			else
				cout << "Odranoel" << endl;
		}
	}

	return 0;
}
