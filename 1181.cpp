#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i,j;
	double m[12][12],res;
	char op;

	cout << fixed << setprecision(1);

	while(cin>>n)
	{
		cin >> op;
		for(i = 0; i < 12; i++)
			for(j = 0; j < 12; j++)	cin>>m[i][j];

		for(i = 0; i < 12; i++)
		{
			res +=  m[n][i];
		}
		if(op == 'S')
		{
			cout << res << endl;
		}
		else
		{
			res = res / 12;
			cout << res << endl;
		}
		res = 0;
	}
	return 0;
}
