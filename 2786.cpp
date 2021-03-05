#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,tipo1,tipo2;

	while(cin >> n)
	{
		cin >> m;

		tipo2 = ((n-1)*2) + ((m-1)*2);
		tipo1 = (n*m) + ((n-1)*(m-1));

		cout << tipo1 << endl;
		cout << tipo2 << endl;
	}

	return 0;
}
