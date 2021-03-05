#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int c,p,f;

	cin >> c >> p >> f;
	if(c*f <= p)
		cout << "S" << endl;
	else 
		cout << "N" << endl;

	return 0;
}
