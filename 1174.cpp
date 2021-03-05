#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i,aux=0,x;
	double v[100];

	cout << fixed << setprecision(1);

	for(i = 0; i < 100;i++)
	{
		cin >> v[i];
	}

	for(i = 0;i < 100;i++)
	{
		if(v[i] <= 10)
		{
			cout << "A[" << i << "] = " << v[i] << endl;
		}
	}

	return 0;
}
