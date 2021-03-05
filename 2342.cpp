#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int max,a,b,res = 0;
	string op;

	cin >> max >> a >> op >> b;
	if(op == "+")
		res = a + b;
	else if(op == "-")
		res = a - b;
	else if(op == "*")
		res = a * b;
	else 
		res = a / b;

	if(res > max)
		cout << "OVERFLOW" << endl;
	else 
		cout << "OK" << endl;
	return 0;
}

