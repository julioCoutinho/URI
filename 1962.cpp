#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,x;

	cin >> n;

	while(n-->0)
	{
		cin >> x;
		if(x > 2014)
		{
			cout << x-2014 << " A.C." << endl;
		}
		else
		{
			cout << 2015 - x << " D.C." << endl;
		}
	}

	return 0;
}
