#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double a,b,c;
	cin >> a >> b;
	c = b-a;
	cout << fixed << setprecision(2);
	if(c != 0)
		cout << (c/a)*100 <<"%" << endl; 
	else
		cout << "0.00%" << endl; 
	return 0;
}
