#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int inicio,fim,total;

	cin >> inicio >> fim;

	if(inicio >= fim)
	{
		total = 24 - inicio;
		total += fim;
	}
	else
	{
		total = fim - inicio;
	}

	cout << "O JOGO DUROU " << total << " HORA(S)" << endl;


	return 0;
}
