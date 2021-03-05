#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,x;
	cout << fixed;
	cout.precision(0);
	cin >> n;
	string z;
	while(n-->0)
	{
		cin >> x;
		if(x % 2 == 0)
			cout << 1 << endl;
		else
			cout << 9 << endl;
	}

	return 0;
}
