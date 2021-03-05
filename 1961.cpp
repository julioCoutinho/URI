#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int p,n,x,ant = 0;
	bool ganhou = true;
	cin >> p >> n >> x;

	n--;
	ant = x;
	while(n-->0)
	{
		
		cin >> x; 
		if(abs(x-ant) > p)
			ganhou = false;
		ant = x;
	}
	if(ganhou)
		cout << "YOU WIN" << endl;
	else
		cout << "GAME OVER" << endl;

	return 0;
}
