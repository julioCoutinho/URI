#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,v[10],i;
	cin >> n;
	v[0] = n;
	cout << "N[0] = " << v[0] << endl;
	for(i = 1; i < 10;i++)
	{
		v[i] = v[i-1]*2;
		cout << "N[" << i << "] = " << v[i] << endl;
	}

	return 0;
}
