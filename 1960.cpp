#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,a,b,c,resto;
	cin >> n;
	a = n / 100;
	resto = n % 100;
	b = resto / 10;
	resto = resto % 10;
	if(a == 1)
	{
		cout << "C";
	}
	else if(a == 2)
	{
		cout << "CC";
	}
	else if(a == 3)
	{
		cout << "CCC";
	}
	else if(a == 4)
	{
		cout << "CD";
	}
	else if(a == 5)
	{
		cout << "D";
	}
	else if(a == 6)
	{
		cout << "DC";
	}
	else if(a == 7)
	{
		cout << "DCC";
	}
	else if(a == 8)
	{
		cout << "DCCC";
	}
	else if(a == 9)
	{
		cout << "CM";
	}
	else if(a == 10)
	{
		cout << "M"<<endl;
		return 0;
	}

	if(b == 1)
	{
		cout << "X";
	}
	else if(b == 2)
	{
		cout << "XX";
	}
	else if(b == 3)
	{
		cout << "XXX";
	}
	else if(b == 4)
	{
		cout << "XL";
	}
	else if(b == 5)
	{
		cout << "L";
	}
	else if(b == 6)
	{
		cout << "LX";
	}
	else if(b == 7)
	{
		cout << "LXX";
	}
	else if(b == 8)
	{
		cout << "LXXX";
	}
	else if(b == 9)
	{
		cout << "XC";
	}
	else if(b == 0 && resto == 0)
	{
		cout <<endl;
		return 0;
	}

	if(resto == 1)
	{
		cout << "I" << endl;
	}
	else if(resto == 2)
	{
		cout << "II" << endl;
	}
	else if(resto == 3)
	{
		cout << "III" << endl;
	}
	else if(resto == 4)
	{
		cout << "IV" << endl;
	}
	else if(resto == 5)
	{
		cout << "V" << endl;
	}
	else if(resto == 6)
	{
		cout << "VI" << endl;
	}
	else if(resto == 7)
	{
		cout << "VII" << endl;
	}
	else if(resto == 8)
	{
		cout << "VIII"  << endl;
	}
	else if(resto == 9)
	{
		cout << "IX"  << endl;
	}
	else if(resto == 0)
	{
		cout << endl;
	}

	return 0;
}
