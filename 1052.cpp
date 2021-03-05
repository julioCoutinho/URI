#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int mes;
	string meses [12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

	cin >> mes;

	if(mes >= 1 && mes <= 12)
		cout << meses[mes-1] << endl;

	return 0;
}
