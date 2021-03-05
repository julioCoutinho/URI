#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,in = 0,out = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if(m >= 10 && m <= 20)
		{
			in++;
		}
		else
		{
			out++;
		}
	}
	cout << in << " in" << endl;
	cout << out << " out" << endl;
	return 0;
}
