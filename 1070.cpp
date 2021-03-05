#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	if(n % 2 == 0)
	{
		n++;
	}

	for(int i = 0; i <= 5 ;n+=2,i++)
	{
		cout << n << endl;
	}

	return 0;
}
