#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	double media = 0,x,y,z;
	cin >> n;

	cout << fixed << setprecision(1);

	while(n-->0)
	{
		cin >> x >> y >> z;

		media = ((x*2)+(y*3)+(z*5))/10;
		cout << media << endl;
	}

	return 0;
}